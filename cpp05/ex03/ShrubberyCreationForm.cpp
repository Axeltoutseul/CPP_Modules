#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target)
{
    std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : Destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string filename;

    this->checkExecution(executor);
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    filename = this->_target + "_shrubbery";
    std::ofstream new_file(filename.c_str());
    if (!new_file)
    {
        std::cerr << "Error : can't open " << filename << std::endl;
        return;
    }

    new_file << "          *********          " << std::endl;
    new_file << "       ***************       " << std::endl;
    new_file << "      *****************      " << std::endl;
    new_file << "    *********************    " << std::endl;
    new_file << "   ***********************   " << std::endl;
    new_file << "   ***********************   " << std::endl;
    new_file << "    *********************    " << std::endl;
    new_file << "      *****************      " << std::endl;
    new_file << "          ***BBB***          " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << "             BBB             " << std::endl;
    new_file << " ------------BBB-------------" << std::endl;
    new_file << " -----------BBBBB------------" << std::endl;
    new_file << " ----------------------------" << std::endl;
    new_file << " ----------------------------" << std::endl;
    new_file.close();
}
