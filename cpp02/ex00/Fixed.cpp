#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixed_int = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    this->fixed_int = src.fixed_int;
    std::cout << "Copy constructor called" << std::endl;
    this->getRawBits();
    return;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_int = src.fixed_int;
    this->getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_int;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_int = raw;
}
