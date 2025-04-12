#include "Account.hpp"

int valid_prompt(std::string input, int _nbDeposits, int nb)
{
    if (!nb || nb > _nbDeposits || nb < 1 || nb > 8 || ft_strlen(input) > 1)
        return 0;
    return 1;
}

void    exec_command(int _nbDeposits)
{
    PhoneBook my_phonebook;
    std::string cmd;
    while (cmd != "EXIT")
    {
        std::cout << "Entrez une commande : ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            my_phonebook.persons[_nbDeposits % 8].getContactDetails(_nbDeposits % 8 + 1);
            if (my_phonebook._nbContacts < 8)
                my_phonebook._nbContacts++;
            _nbDeposits++;
        }
        else if (cmd == "SEARCH")
        {
            my_phonebook.displayAccountsInfos(my_phonebook.persons);
            std::string input;
            std::cout << "Saisissez l'index : ";
            std::getline(std::cin, input);
            int nb = ft_atoi(input);
            while (!valid_prompt(input, _nbDeposits, nb))
            {
                std::cout << "Veuillez entrer un nombre valide.\nSaisissez l'index : ";
                std::getline(std::cin, input);
                nb = ft_atoi(input);
            }
            my_phonebook.persons[nb - 1].displayContactDetails();
        }
        else if (cmd == "EXIT")
            std::cout << "Bye." << std::endl;
        else
            std::cout << "Please type a valid command." << std::endl;
    }
}
