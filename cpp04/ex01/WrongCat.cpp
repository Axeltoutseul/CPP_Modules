#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "Wrong cat";
    return;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
}

WrongCat::~WrongCat(void)
{
    return;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->type = src.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}
