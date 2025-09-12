#include "Intern.hpp"

int Intern::findIndex(std::string form_name)
{
    std::string names[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    int i = 0;
    while (i < 3 && names[i] != form_name)
        i++;
    return i;
}

AForm *Intern::makeForm(std::string form_name, std::string target)
{
    AForm *new_form;
    int i = findIndex(form_name);

    new_form = NULL;
    switch (i)
    {
        case (0):
        {
            new_form = new PresidentialPardonForm(target);
            break;
        }
        case (1):
        {
            new_form = new RobotomyRequestForm(target);
            break;
        }
        case (2):
        {
            new_form = new ShrubberyCreationForm(target);
            break;
        }
        case (3):
        {
            std::cout << "Error ! " << form_name << " is a wrong name." << std::endl;
            return NULL;
        }
    }
    std::cout << std::endl << "Intern creates " << form_name << "." << std::endl << std::endl;
    return new_form;
}
