#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Created animal" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string name)
{
    std::cout << "Created " << name << std::endl;
    this->type = name;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Copied animal" << std::endl;
    *this = src;
}

Animal::~Animal(void)
{
    if (this->type != "Animal")
        std::cout << "Killed " << this->type << std::endl;
    else
        std::cout << "Killed animal" << std::endl;
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
