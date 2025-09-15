#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    {
        Intern someRandomIntern;
        Intern anotherIntern(someRandomIntern);
        AForm* rrf;
        rrf = anotherIntern.makeForm("Robotomy Request", "Bender");
        delete rrf;
    }
    return 0;
}
