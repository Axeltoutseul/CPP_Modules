#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Created dog" << std::endl;
    this->type = "Dog";
    return;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Copied dog" << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    std::cout << "Killed dog" << std::endl;
    return;
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
