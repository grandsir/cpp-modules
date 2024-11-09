/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:19:25 by databey           #+#    #+#             */
/*   Updated: 2024/11/09 10:24:57 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp" 

Phonebook::Phonebook(void)
{
	this->count = 0;
	std::cout << \
		"Welcome to phone book." \
		<< std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "See you soon!" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	str;

	str = "";
	if (this->count > 7)
		std::cout << "Overwriting into contact" << this->contacts[this->count % 8].get_first_name() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->count % 8].set_first_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->contacts[this->count % 8].get_first_name() << "'s last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->count % 8].set_last_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->contacts[this->count % 8].get_first_name() << "'s nickname: "; 
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->count % 8].set_nickname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->contacts[this->count % 8].get_first_name() << "'s phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->count % 8].set_phone_number(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->contacts[this->count % 8].get_first_name() << "'s darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->contacts[this->count % 8].set_darkest_secret(str);
			std::cout << this->contacts[this->count % 8].get_first_name() << \
				" successfully added to Phonebook [" << this->count % 8 + 1 << "/8]" << std::endl;
		}
	}
	this->count++;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Getting contact information" << std::endl;
	if (!contact.get_first_name().size())
	{
		std::cout << "Can't get contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_darkest_secret() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->contacts[index % 8]);
}

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

void	Phonebook::search(void)
{
	std::string	str;

	char		c;
	int			i;
    
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (this->contacts[c - 1 - '0'].get_first_name().size() && ++i)
		{
			str = c;
			str = fix_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_first_name(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_last_name(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_nickname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	} 
	std::cout << " ------------------------------------------- " << std::endl;

	if (!i)
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->contacts[str[0] - 1 - '0'].get_first_name().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->contacts[str[0] - 1 - '0']);
}