#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("28B"), _grade_to_sign(120), _grade_to_execute(120), _target("Jim")
{
    this->_is_signed = false;
    std::cout << "AForm : Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, int grade_to_sign, int grade_to_execute, const std::string target) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute), _target(target)
{
    this->_is_signed = false;
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
        throw(AForm::GradeTooHighException());
    if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
        throw(AForm::GradeTooLowException());
    std::cout << "AForm : Parameterized constructor called" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute), _target(src._target)
{
    this->_is_signed = src._is_signed;
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
        throw(AForm::GradeTooHighException());
    if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
        throw(AForm::GradeTooLowException());
    std::cout << "AForm : Copy constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm : Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
    this->_is_signed = src._is_signed;
    std::cout << "AForm : Copy assignment operator called" << std::endl;
    return *this;
}

std::string AForm::getName() const
{
    return this->_name;
}

std::string AForm::getTarget() const
{
    return this->_target;
}

std::string AForm::getDetails()
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

void AForm::beSigned(Bureaucrat &employee)
{
    if (employee.getGrade() <= this->_grade_to_sign)
    {
        this->_is_signed = true;
        std::cout << employee.getName() << " signed " << this->_name << std::endl;
    }
    else
    {
        std::cout << employee.getName() << " couldn't sign " << this->_name << " because his grade is too low" << std::endl;
        throw(AForm::GradeTooLowException());
    }
}

void AForm::checkExecution(const Bureaucrat &executor) const
{
    if (this->_is_signed == false)
        throw(NotSignedException());
    if (this->_grade_to_execute < executor.getGrade())
        throw(GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, AForm &obj)
{
    os << obj.getDetails();
    return os;
}
