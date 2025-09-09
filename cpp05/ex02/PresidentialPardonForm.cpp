#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5, "Jim")
{
    std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
    std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &employee) const
{
    (void)employee;
    std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}
