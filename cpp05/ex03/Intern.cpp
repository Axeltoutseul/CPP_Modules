#include "Intern.hpp"

AForm *Intern::makeForm(std::string form_name, std::string target)
{
    AForm *new_form;

    (void)target;
    new_form = NULL;
    if (form_name == "Presidential Pardon")
        return (PresidentialPardonForm *)new_form;
    if (form_name == "Robotomy Request")
        return (RobotomyRequestForm *)new_form;
    if (form_name == "Shrubbery Creation")
        return (ShrubberyCreationForm *)new_form;
    return new_form;
}
