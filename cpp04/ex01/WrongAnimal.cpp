#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Created wrong animal" << std::endl;
    this->type = "Wrong animal";
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "Created " << name << std::endl;
    this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "Copied wrong animal" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destroyed wrong animal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "Wrong animal: Assignment operator overloading called" << std::endl;
    this->type = src.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "* A wrong animal makes no sound *" << std::endl;
}
