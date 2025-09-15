#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
    public:
    PhoneBook();
    ~PhoneBook();
    
    Contact contacts[8];
    int index;
    int total_contacts;

    PhoneBook();
    void addContact();
    void searchContact();
    void displayContacts();
    void displayContactDetails(int index);
};

#endif