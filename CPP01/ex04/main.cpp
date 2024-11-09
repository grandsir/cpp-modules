/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:33:01 by databey           #+#    #+#             */
/*   Updated: 2024/11/09 20:33:02 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "*** You must enter 4 arguments." << std::endl ;
        return 0;
    }
    std::ifstream inputFile(av[1]);
        if(!inputFile)
        {
            std::cout << "*** Entered file cannot open." << std::endl;
            return 0;
        }
    std::string s1 = av[2];
    std::string s2 = av[3];

    if(s1 == s2)
    {
        std::cout << "*** Are u kidding me? Please enter different word or letter." << std::endl;
        return 0;
    }
    if(inputFile.is_open())
    {
        std::string line;
        std::string r_file = av[1];
        r_file += ".replace";
        std::ofstream replace_file(r_file);
        while(std::getline(inputFile, line))
        {
            size_t found = line.find(s1);
            while(found != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1);
            }
            replace_file << line << std::endl;
        }
        replace_file.close();
        inputFile.close();
    }
    return 0;
}