#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_nb = 0;
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &src)
{
    this->_nb = src._nb;
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
    return;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_nb = nb << this->_number_of_bits;
    return;
}

Fixed::Fixed(const float fixed_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(fixed_float * (1 << _number_of_bits));
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
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
    this->_nb = src._nb;
    return *this;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
