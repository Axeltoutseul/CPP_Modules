#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Created cat" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(std::string name) : Animal(name)
{
    return;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    brain = new Brain(*src.brain);
    std::cout << "Copied cat" << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Killed cat" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat: Assignment operator overloading called" << std::endl;
    this->type = src.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou !" << std::endl;
}

void Cat::displayIdeas(void)
{
    this->brain->displayIdeas();
}

void Cat::setIdea(std::string idea, int i)
{
    this->brain->setIdea(idea, i);
}
