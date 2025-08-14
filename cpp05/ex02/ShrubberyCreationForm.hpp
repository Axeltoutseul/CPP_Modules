#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

    public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string name, int grade_to_sign, int grade_to_execute);
    ~ShrubberyCreationForm();
};

#endif
