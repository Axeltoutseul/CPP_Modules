#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat employee("Alex", 1);
    Bureaucrat worker = employee;
    worker.incrementGrade();
    int grade = worker.getGrade();

    try
    {
        if (grade >= 1 && grade <= 150)
            std::cout << worker << std::endl;
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
