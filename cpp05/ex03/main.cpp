#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat employee("Jean", 5);
        RobotomyRequestForm first_form("Garden");
        RobotomyRequestForm second_form(first_form);
        std::cout << std::endl;
        employee.incrementGrade();
        second_form.beSigned(employee);
        employee.executeForm(second_form);
        std::cout << std::endl;
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
    catch(AForm::NotSignedException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
