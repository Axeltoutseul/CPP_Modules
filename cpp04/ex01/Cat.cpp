#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Created cat" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(std::string name) : Animal(name)
{
    return;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Copied cat" << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    if (this->type != "Cat")
        std::cout << "Killed " << this->type << std::endl;
    else
        std::cout << "Killed cat" << std::endl;
    delete brain;
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
