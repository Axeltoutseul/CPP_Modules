#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat employee("Joe", 12);
    Bureaucrat worker(employee);
    int grade = worker.getGrade();

    try
    {
        if (grade >= 1 && grade <= 150)
            std::cout << worker.getName() << ", bureaucrat grade " << grade << std::endl;
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
