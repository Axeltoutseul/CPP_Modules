#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
    return;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(nb << this->_number_of_bits);
    return;
}

Fixed::Fixed(const float fixed_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(fixed_float * (1 << _number_of_bits)));
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return this->_nb >> _number_of_bits;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_nb) / (1 << _number_of_bits);
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_nb;
}

void Fixed::setRawBits(int const raw)
{
    this->_nb = raw;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
