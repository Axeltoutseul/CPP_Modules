#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern {

    public:

    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &src);
    int findIndex(std::string form_name);
    AForm *makeForm(std::string form_name, std::string target);


    private:
};

#endif
