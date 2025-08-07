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
            throw GradeTooLowException("The grade is too low !");
        else
            throw GradeTooHighException("The grade is too high !");
    }
    catch (GradeTooLowException &e)
    {
        e.what();
    }
    catch (GradeTooHighException &e)
    {
        e.what();
    }
    return 0;
}
