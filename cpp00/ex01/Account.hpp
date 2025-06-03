#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <iostream>
#include <string>
#include <limits>

std::string copy_name(std::string src);
void        exec_command(int _nbDeposits);
int         ft_strlen(std::string str);
int         ft_atoi(std::string str);
int         get_prompt(const char *message, std::string *str);

class Contact {

    public:

    Contact(void)
    {
        return;
    }

    ~Contact(void)
    {
        return;
    }

    int getContactDetails(int index)
    {
        this->index = index;
        if (!get_prompt("First name : ", &this->first_name))
            return (0);
        if (!get_prompt("Last name : ", &this->last_name))
            return (0);
        if (!get_prompt("Nickname : ", &this->nickname))
            return (0);
        if (!get_prompt("Phone number : ", &this->phone_number))
            return (0);
        if (!get_prompt("Darkest secret : ", &this->darkest_secret))
            return (0);
        std::cout << std::endl;
        return (1);
    }

    void displayLine()
    {
        std::cout << "|" << this->index << "         ";
        std::cout << "|" << copy_name(this->first_name);
        std::cout << "|" << copy_name(this->last_name);
        std::cout << "|" << copy_name(this->nickname);
        std::cout << "|" << std::endl;
    }

    void displayContactDetails()
    {
        std::cout << std::endl;
        std::cout << "First name : " << this->first_name << std::endl;
        std::cout << "Last name : " << this->last_name << std::endl;
        std::cout << "Nickname : " << this->nickname << std::endl;
        std::cout << "Phone number : " << this->phone_number << std::endl;
        std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
        std::cout << std::endl;
    }

    private:

    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class PhoneBook {

    public:

    PhoneBook(void)
    {
        _nbContacts = 0;
        return;
    }

    ~PhoneBook(void)
    {
        return;
    }

    void	displayAccountsInfos(Contact *persons)
    {
        int i = 0;
        std::cout << std::endl;
        std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
        std::cout << "_____________________________________________" << std::endl;
        while (i < _nbContacts)
        {
            persons[i].displayLine();
            i++;
        }
        std::cout << std::endl;
    }

    Contact persons[8];
    int _nbContacts;
};

class Account {

    public:

        typedef Account t;

        Account(void)
        {
            _nbDeposits = 0;
            exec_command(_nbDeposits);
        }
        ~Account(void)
        {
            return;
        }

    private:

        int				_nbDeposits;

};

#endif
