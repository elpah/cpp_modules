
#ifndef CONTACT_HPP
#define CONTACT_HPP
    #include <string>

class Contact {
    public:
    Contact();
    ~Contact();
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getSecret();
        std::string getPhoneNumber();  
         void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickname(std::string value);
        void setSecret(std::string value);
        void setPhoneNumber(std::string value);
};

#endif