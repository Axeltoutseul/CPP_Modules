#include "Account.hpp"

int valid_prompt(int _nbDeposits, int nb)
{
    if (!nb || nb > _nbDeposits || nb < 1 || nb > 8)
        return 0;
    return 1;
}

int get_prompt(const char *message, std::string *str)
{
    std::cout << message;
    if (!std::getline(std::cin, *str))
        return (0);
    while (!ft_strlen(*str))
    {
        std::cout << message;
        if (!std::getline(std::cin, *str))
            return (0);
    }
    return (1);
}

static int exec_search(PhoneBook my_phonebook, int _nbDeposits)
{
    my_phonebook.displayAccountsInfos(my_phonebook.persons);
    std::string input;
    std::cout << "Type the index : ";
    if (!std::getline(std::cin, input))
        return (0);
    int nb = ft_atoi(input);
    while (!valid_prompt(_nbDeposits, nb))
    {
        std::cout << "Please enter a valid number.\n\nType the index : ";
        if (!std::getline(std::cin, input))
            return (0);
        nb = ft_atoi(input);
    }
    my_phonebook.persons[nb - 1].displayContactDetails();
    return (1);
}

void    exec_command(int _nbDeposits)
{
    PhoneBook my_phonebook;
    std::string cmd;
    while (cmd != "EXIT")
    {
        std::cout << "Enter a command : ";
        if (!std::getline(std::cin, cmd))
        {
            std::cout << std::endl << "Bye." << std::endl;
            break;
        }
        if (cmd == "ADD")
        {
            if (!my_phonebook.persons[_nbDeposits % 8].getContactDetails(_nbDeposits % 8 + 1))
            {
                std::cout << std::endl << "Bye." << std::endl;
                break;
            }
            if (my_phonebook._nbContacts < 8)
                my_phonebook._nbContacts++;
            _nbDeposits++;
        }
        else if (cmd == "SEARCH")
        {
            if (!_nbDeposits)
                std::cout << "There is currently no contact..." << std::endl << std::endl;
            else
            {
                if (!exec_search(my_phonebook, _nbDeposits))
                {
                    std::cout << std::endl << "Bye." << std::endl;
                    break;
                }
            }
        }
        else if (cmd == "EXIT")
            std::cout << "Bye." << std::endl;
        else
            std::cout << "Please type a valid command." << std::endl << std::endl;
    }
}
