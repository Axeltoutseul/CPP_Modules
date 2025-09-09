#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target)
{
    std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->checkExecution(executor);
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}
