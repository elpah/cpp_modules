/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 06:04:31 by elpah             #+#    #+#             */
/*   Updated: 2025/09/15 07:56:02 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Contact::Contact() {
}
Contact::~Contact() {
}

PhoneBook::addContact(Contact newContact){
    // check that we do not exceed 8 contacts
    contacts[index] = newContact;
    index =( index + 1) % 8;

    if(total_contacts < 8)
        total_contacts++;
}