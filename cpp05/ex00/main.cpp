#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat employee("Alex", 0);
    Bureaucrat worker(employee);
    try
    {
        std::cout << worker << std::endl;
        worker.incrementGrade();
        std::cout << worker << std::endl;
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
