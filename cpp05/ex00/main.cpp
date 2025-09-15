#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat employee("Alex", 25);
        Bureaucrat worker;
        worker = employee;
        std::cout << employee << std::endl;
        //worker.decrementGrade();
        //worker.incrementGrade();
        std::cout << worker << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
