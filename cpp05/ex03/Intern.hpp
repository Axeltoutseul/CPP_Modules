#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern {

    public:

    AForm *makeForm(std::string form_name, std::string target);
};

#endif
