#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    return;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    *this = src;
}

Dog::~Dog(void)
{
    return;
}

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof !" << std::endl;
}
