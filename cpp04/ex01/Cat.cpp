#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    return;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    *this = src;
}

Cat::~Cat(void)
{
    delete brain;
    return;
}

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou !" << std::endl;
}
