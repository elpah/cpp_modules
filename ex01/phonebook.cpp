/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 06:04:31 by elpah             #+#    #+#             */
/*   Updated: 2025/09/21 04:43:33 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : _index(0), total_contacts(0) {}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact newContact)
{
    _contacts[_index] = newContact;
    _index = (_index + 1) % 8;

    if (total_contacts < 8)
        total_contacts++;
}

void printHeader()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     Index| FirstName|  LastName|  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void printString(std::string value)
{
    if (value.length() > 10)
    {
        std::cout << value.substr(0, 9) << ".";
    }
    else
    {
        std::cout << std::setw(10) << value;
    }
}

void PhoneBook::displayContacts()
{
    if (total_contacts < 1)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    printHeader();
    for (int i = 0; i < total_contacts; i++)
    {
        if (!this->_contacts[i].getFirstName().empty())
        {

            std::cout << "|";
            std::cout << std::setw(10) << i + 1;
            std::cout << "|";
            printString(this->_contacts[i].getFirstName());
            std::cout << "|";
            printString(this->_contacts[i].getLastName());
            std::cout << "|";
            printString(this->_contacts[i].getNickname());
            std::cout << "|";
            std::cout << "\n";
        }
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::displayContactDetails(int index)
{
    std::cout << "First Name: " << this->_contacts[index].getFirstName() << "\n";
    std::cout << "Last Name: " << this->_contacts[index].getLastName() << "\n";
    std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << "\n";
    std::cout << "Nick Name: " << this->_contacts[index].getNickname() << "\n";
    std::cout << "Darkest Secret: " << this->_contacts[index].getSecret() << "\n";
}
