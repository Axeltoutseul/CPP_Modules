#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
    *this = src;
    std::cout << "Intern: Copy constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern: Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
    if (this != &src)
        *this = src;
    std::cout << "Intern: Copy assignment operator called" << std::endl;
    return (*this);
}

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
