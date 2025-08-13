#include "Form.hpp"

Form::Form() : _name("2042C"), _grade_to_sign(3), _grade_to_execute(2)
{
    this->_is_signed = false;
    std::cout << "Form : Default constructor called" << std::endl;
}

Form::Form(const std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    this->_is_signed = false;
    std::cout << "Form : Parameterized constructor called" << std::endl;
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

std::string Form::getDetails()
{
    std::string is_signed;
    std::ostringstream grade_to_sign;
    std::ostringstream grade_to_exec;
    grade_to_sign << this->_grade_to_sign;
    grade_to_exec << this->_grade_to_execute;

    if (this->_is_signed == true)
        is_signed = "true";
    else
        is_signed = "false";
    return "Name = " + this->_name + "\nIs signed = " + is_signed + "\nGrade to sign = "
    + grade_to_sign.str() + "\nGrade to execute = " + grade_to_exec.str();
}

void Form::beSigned(Bureaucrat employee)
{
    if (employee.getGrade() <= this->_grade_to_sign)
        this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form &obj)
{
    os << obj.getDetails();
    return os;
}
