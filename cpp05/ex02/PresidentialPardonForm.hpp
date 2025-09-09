#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:

    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();
    std::string getTarget() const;
    void execute(Bureaucrat const &employee) const;


    private:

    std::string _target;
};

#endif
