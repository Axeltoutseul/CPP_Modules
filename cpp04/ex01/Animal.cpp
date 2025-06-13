#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Animal";
    return;
}

Animal::Animal(const Animal &src)
{
    *this = src;
}

Animal::~Animal(void)
{
    return;
}

Animal &Animal::operator=(const Animal &src)
{
    if (this != &src)
        this->type = src.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
}
