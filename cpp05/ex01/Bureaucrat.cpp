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

std::string Bureaucrat::getName(void)
{
    return this->_name;
}

int Bureaucrat::getGrade(void)
{
    return this->_grade;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
    this->_message = "The grade is too low";
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void)
{
    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    this->_message = "The grade is too low";
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void)
{
    return;
}
