#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "Wrong animal";
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal(void)
{
    return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->type = src.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "* A wrong animal make no sound *" << std::endl;
}

