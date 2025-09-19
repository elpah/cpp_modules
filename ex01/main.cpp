/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 06:03:54 by elpah             #+#    #+#             */
/*   Updated: 2025/09/19 04:57:00 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"

std::string readAndAdd(std::string prompt)
{
    std::string input;
    do
    {
        std::cout << prompt << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
    } while (input.empty());
    return (input);
}

bool check_number(std::string str, PhoneBook &phonebook)
{
    int value;
    if (str.empty())
        return false;
    for (std::size_t i = 0; i < str.size(); i++)
    {
        if ((str[i] >= '0' && str[i] <= '9'))
            continue;
        else
            return false;
    }
    value = atoi(str.c_str());
    if (value > 0 && value <= phonebook.total_contacts)
        return true;
    return false;
}

void search(PhoneBook &phoneBook)
{
    std::string input;
    phoneBook.displayContacts();

    while ((std::getline(std::cin, input)) && !check_number(input, phoneBook))
    {
        std::cout << "Invalid index. Enter a number between 1 and " << phoneBook.total_contacts << ": ";
    }
    phoneBook.displayContactDetails(atoi(input.c_str()) - 1);
}

void add(PhoneBook &phoneBook)
{
    Contact newContact;
    newContact.setFirstName(readAndAdd("Enter First Name:"));
    newContact.setLastName(readAndAdd("Enter Last Name:"));
    newContact.setNickname(readAndAdd("Enter Nickname:"));
    newContact.setPhoneNumber(readAndAdd("Enter Phone Number:"));
    newContact.setSecret(readAndAdd("Enter Darkest Secret:"));
    phoneBook.addContact(newContact);
}

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Please enter a command ADD, SEARCH or EXIT" << std::endl;

    while (1)
    {
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
            add(phoneBook);
        else if (command == "SEARCH")
            search(phoneBook);
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}