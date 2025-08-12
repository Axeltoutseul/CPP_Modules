#include "Form.hpp"

Form::Form() : _name("2042C"), _grade_to_sign(3), _grade_to_execute(2)
{
    this->_is_signed = false;
    std::cout << "Form : Default constructor called" << std::endl;
}

Form::Form(const Form &src) : _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute)
{
    this->_is_signed = src._is_signed;
    std::cout << "Form : Copy constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form : Destructor called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
    this->_is_signed = src._is_signed;
    std::cout << "Form : Copy assignment operator called" << std::endl;
    return *this;
}

void Form::beSigned(Bureaucrat employee)
{
    if (employee.getGrade() <= this->_grade_to_sign)
        this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
}
