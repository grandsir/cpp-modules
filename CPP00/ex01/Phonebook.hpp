/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:29:43 by databey           #+#    #+#             */
/*   Updated: 2024/11/10 02:32:25 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
        int count;
    public:
        Phonebook(void);
        ~Phonebook(void);
        Contact  get_contact(int);
        void search(void);
        void print(Contact);
        void add(void);
};

#endif