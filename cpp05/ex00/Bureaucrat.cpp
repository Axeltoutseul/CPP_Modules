#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Paul"), _grade(150)
{
    std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat : Parameterized constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->_grade = src._grade;
    std::cout << "Bureaucrat : Copy assignment operator called" << std::endl;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    /*if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();*/
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    /*if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();*/
    this->_grade--;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    return;
}

void Bureaucrat::GradeTooLowException::what()
{
    std::cout << "The grade is too low" << std::endl;
}

void Bureaucrat::GradeTooHighException::what()
{
    std::cout << "The grade is too high" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
