#include "Brain.hpp"

Brain::Brain(void)
{
    int i = 0;
    while (i < 100)
        this->ideas[i++] = "Default";
    //this->displayIdeas();
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
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout << "Brain Assignment operator called" << std::endl;
    return *this;
}

void Brain::displayIdeas(void)
{
    int i = 0;
    std::cout << std::endl;
    while (i < 100)
        std::cout << this->ideas[i++] << std::endl;
    std::cout << std::endl;
}

std::string Brain::getIdea(int i)
{
    return this->ideas[i];
}

void Brain::setIdea(std::string idea, int i)
{
    this->ideas[i] = idea;
}
