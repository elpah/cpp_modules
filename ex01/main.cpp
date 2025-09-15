/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 06:03:54 by elpah             #+#    #+#             */
/*   Updated: 2025/09/09 06:21:17 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.cpp"
#include "contact.cpp"


int main()
{
    std::string command;
    std::cout << "Please enter a command" << std::endl;   
     std::cout << "ADD, SEARCH or EXIT" << std::endl;
    std::cin>>command;

    if(command == "ADD")
    {
        std::cout << "You chose ADD" << std::endl;
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