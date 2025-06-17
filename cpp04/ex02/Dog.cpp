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
    std::cout << "Copied dog" << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    if (this->type != "Dog")
        std::cout << "Killed " << this->type << std::endl;
    else
        std::cout << "Killed dog" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog: Assignment operator overloading called" << std::endl;
    this->type = src.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof !" << std::endl;
}
