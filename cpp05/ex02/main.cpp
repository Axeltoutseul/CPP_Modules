#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat employee("Jean", 2);
        PresidentialPardonForm first_form;
        PresidentialPardonForm second_form(first_form);
        employee.incrementGrade();
        first_form.beSigned(employee);
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
