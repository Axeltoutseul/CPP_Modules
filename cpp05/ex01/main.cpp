#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat employee("Francois", 2);
        employee.incrementGrade();
        //employee.decrementGrade();
        Form first_form("2042C", 2, 1);
        Form second_form(first_form);
        std::cout << std::endl << second_form << std::endl << std::endl;
        second_form.beSigned(employee);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
