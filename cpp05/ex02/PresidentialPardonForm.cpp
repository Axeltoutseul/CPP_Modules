#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5)
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

void forgive(std::string target)
{
    std::cout << target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->_grade_to_sign && this->_is_signed == true)
    {
        this->_is_signed = true;
        std::cout << executor.getName() << " signed " << this->_name << std::endl;
    }
    else if (this->_is_signed == false)
    {
        throw(AForm::NotSignedException());
    }
    else
    {
        std::cout << executor.getName() << " couldn't sign " << this->_name << " because his grade is too low" << std::endl;
        throw(AForm::GradeTooLowException());
    }
}
