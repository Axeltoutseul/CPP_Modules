#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:

    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();
    void forgive(std::string target);
};

#endif
