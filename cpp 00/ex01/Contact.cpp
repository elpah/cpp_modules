/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:18:13 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 18:46:16 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

// getters
std::string Contact::getFirstName()
{
    return this->first_name;
}
std::string Contact::getLastName()
{
    return this->last_name;
}
std::string Contact::getNickname()
{
    return this->nickname;
}
std::string Contact::getSecret()
{
    return this->darkest_secret;
}
std::string Contact::getPhoneNumber()
{
    return this->phone_number;
}

// setters
void Contact::setFirstName(std::string value)
{
    this->first_name = value;
}
void Contact::setLastName(std::string value)
{
    this->last_name = value;
}
void Contact::setNickname(std::string value)
{
    this->nickname = value;
}
void Contact::setSecret(std::string value)
{
    this->darkest_secret = value;
}
void Contact::setPhoneNumber(std::string value)
{
    this->phone_number = value;
}
