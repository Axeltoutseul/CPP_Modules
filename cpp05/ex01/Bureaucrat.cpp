#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Paul"), _grade(150)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->_grade = src._grade;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Bureaucrat::GradeTooHighException(void)
{
    if (this->_grade < 1)
        return 1;
    return 0;
}

std::string Bureaucrat::getName(void)
{
    return this->_name;
}

int Bureaucrat::getGrade(void)
{
    return this->_grade;
}

GradeTooLowException::GradeTooLowException(std::string message)
{
    this->_message = message;
    return;
}

GradeTooLowException::~GradeTooLowException(void)
{
    return;
}

void GradeTooLowException::what(void)
{
    std::cout << this->_message << std::endl;
}

GradeTooHighException::GradeTooHighException(std::string message)
{
    this->_message = message;
    return;
}

GradeTooHighException::~GradeTooHighException(void)
{
    return;
}

void GradeTooHighException::what(void)
{
    std::cout << this->_message << std::endl;
}
