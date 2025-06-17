#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Created cat" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Copied cat" << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    std::cout << "Killed cat" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat: Assignment operator overloading called" << std::endl;
    this->type = src.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou !" << std::endl;
}
