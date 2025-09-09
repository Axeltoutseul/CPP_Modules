#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:

    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const &employee) const;


    private:

    std::string _target;
};

#endif
