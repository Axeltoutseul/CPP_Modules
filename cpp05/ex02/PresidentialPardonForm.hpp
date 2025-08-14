#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:

    PresidentialPardonForm();
    PresidentialPardonForm(const std::string name, int grade_to_sign, int grade_to_execute);
    ~PresidentialPardonForm();
};

#endif
