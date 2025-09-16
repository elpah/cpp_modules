#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
    private:
    Contact _contacts[8];
    int _index;
    int _total_contacts;

    public:
    PhoneBook();
    ~PhoneBook();
    void displayContacts();
    void addContact(Contact newContact);
    void displayContactDetails(int index);
};

#endif