#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    return;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    *this = src;
}

Cat::~Cat(void)
{
    return;
}

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
        this->type = src.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou !" << std::endl;
}
