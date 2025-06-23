#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Created dog" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(std::string name) : Animal(name)
{
    return;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    if (this->brain)
        delete brain;
    brain = new Brain(*src.brain);
    std::cout << "Copied dog" << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Killed dog" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog: Assignment operator overloading called" << std::endl;
    this->brain = src.brain;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof !" << std::endl;
}

void Dog::displayIdeas(void)
{
    this->brain->displayIdeas();
}

void Dog::setIdea(std::string idea, int i)
{
    this->brain->setIdea(idea, i);
}
