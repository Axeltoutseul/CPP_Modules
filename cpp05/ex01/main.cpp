#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat employee("Alex", 1);
    Bureaucrat worker(employee);
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
        e.what();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        e.what();
    }
    return 0;
}
