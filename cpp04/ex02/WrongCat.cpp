#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "Created wrong cat" << std::endl;
    this->type = "Wrong cat";
    return;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "Copied wrong cat" << std::endl;
    *this = src;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destroyed wrong cat" << std::endl;
    return;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "Wrong cat: Assignment operator overloading called" << std::endl;
    this->type = src.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}
