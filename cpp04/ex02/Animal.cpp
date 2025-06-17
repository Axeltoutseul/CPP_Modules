#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Created animal" << std::endl;
    this->type = "Animal";
    return;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Copied animal" << std::endl;
    *this = src;
}

Animal::~Animal(void)
{
    std::cout << "Killed animal" << std::endl;
    return;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal: Assignment operator overloading called" << std::endl;
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
