/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:32:32 by databey           #+#    #+#             */
/*   Updated: 2024/11/09 20:32:34 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *data = zombieHorde(5, "den");
    for(int i = 0; i < 5; i++)
    {
        data[i].announce();
    }
    delete[] data;
}