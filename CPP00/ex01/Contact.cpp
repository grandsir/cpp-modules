/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:29:18 by databey           #+#    #+#             */
/*   Updated: 2024/11/02 03:33:44 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string name) {
    this->first_name = name;
}

void Contact::set_last_name(std::string last_name) {
    this->last_name = last_name;    
}

void Contact::set_nickname(std::string nickname) {
    this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number) {
    this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string secret) {
    this->darkest_secret = secret;
}

std::string  Contact::get_first_name(void) {
    return (this->first_name) ;
}

std::string  Contact::get_last_name(void) {
    return (this->last_name) ;
}

std::string  Contact::get_nickname(void) {
    return (this->nickname) ;
}

std::string  Contact::get_phone_number(void) {
    return (this->phone_number) ;
}

std::string  Contact::get_darkest_secret(void) {
    return (this->darkest_secret) ;
}
