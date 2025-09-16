/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 06:03:54 by elpah             #+#    #+#             */
/*   Updated: 2025/09/15 08:58:39 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.cpp"
#include "contact.cpp"

std::string readAndAdd(std::string prompt)
{
    std::string input;
    do {
        std::cout <<prompt <<std::endl;
        std::getline(std::cin, input);
            if(input.empty())
           {
             std::cout << "Input cannot be empty. Please try again." << std::endl;
           }   
        } 
    while (input.empty());
        return (input);           
}


int main()
{
    PhoneBook phoneBook;
    Contact newContact;
    std::string command;

    std::cout << "Please enter a command ADD, SEARCH or EXIT" << std::endl;   

    std::getline(std::cin, command);


    if(command == "ADD")
    {
        newContact.setFirstName(readAndAdd("Enter First Name:"));
        newContact.setLastName(readAndAdd("Enter Last Name:"));
        newContact.setNickname(readAndAdd("Enter Nickname:"));
        newContact.setPhoneNumber(readAndAdd("Enter Phone Number:"));
        newContact.setSecret(readAndAdd("Enter Darkest Secret:"));
        phoneBook.addContact(newContact);
    }
    else if(command == "SEARCH")
    {
        std::cout << "You chose SEARCH" << std::endl;
    }
    else if(command == "EXIT")
    {
        std::cout << "You chose EXIT" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Invalid command" << std::endl;
    }
}