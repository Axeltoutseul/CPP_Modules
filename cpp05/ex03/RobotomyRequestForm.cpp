#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target)
{
    std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->checkExecution(executor);
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    srand(time(NULL));
    int nb =  rand() % 2 + 1;
    if (nb == 1)
        std::cout << "The robotomy failed." << std::endl;
    else if (nb == 2)
        std::cout << "* drilling noise * ... " << this->getTarget() << " has been robotomized successfully." << std::endl;
}
