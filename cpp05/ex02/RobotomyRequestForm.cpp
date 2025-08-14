#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, int grade_to_sign, int grade_to_execute) : AForm(name, grade_to_sign, grade_to_execute)
{
    std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : Destructor called" << std::endl;
}
