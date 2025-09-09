#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

    public:

    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    std::string getTarget() const;
    void execute(Bureaucrat const &employee) const;


    private:

    std::string _target;
};

#endif
