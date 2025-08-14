#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat employee("Jean", 2);
        AForm first_form("28B", 1, 1);
        AForm second_form(first_form);
        employee.incrementGrade();
        second_form.beSigned(employee);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(AForm::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
