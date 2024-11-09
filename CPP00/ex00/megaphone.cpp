/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:00:35 by databey           #+#    #+#             */
/*   Updated: 2024/11/09 10:17:12 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac >= 2)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {  
                std::cout << (char) std::toupper(av[i][j]);
                j++; 
            }
            i++;
        }
        std::cout << '\n';
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
