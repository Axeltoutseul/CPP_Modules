#include "Brain.hpp"

Brain::Brain(void)
{
    int i = 0;
    while (i < 100)
        this->ideas[i++] = "Default";
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    this->operator=(src);
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    if (this != &src)
        this->ideas[100] = src.ideas[100];
    std::cout << "Brain assignation operator called" << std::endl;
    return *this;
}
