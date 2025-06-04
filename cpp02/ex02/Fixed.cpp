#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_nb = 0;
    return;
}

Fixed::Fixed(const Fixed &src)
{
    this->_nb = src._nb;
    this->operator=(src);
    return;
}

Fixed::Fixed(const int nb)
{
    this->_nb = nb << this->_number_of_bits;
    return;
}

Fixed::Fixed(const float fixed_float)
{
    this->_nb = roundf(fixed_float * (1 << _number_of_bits));
    return;
}

Fixed::~Fixed(void)
{
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
    this->_nb = src._nb;
    return *this;
}

Fixed Fixed::operator+(const Fixed &src)
{
    this->_nb += src._nb;
    return *this;
}

Fixed Fixed::operator-(const Fixed &src)
{
    this->_nb -= src._nb;
    return *this;
}

Fixed Fixed::operator*(const Fixed &src)
{
    this->_nb = (this->_nb * src._nb) / (1 << _number_of_bits);
    return *this;
}

Fixed Fixed::operator/(const Fixed &src)
{
    if (src._nb == 0)
    {
        std::cout << "Error : division by zero." << std::endl;
        return -1;
    }
    this->_nb = this->_nb * (1 << _number_of_bits) / src._nb;
    return *this;
}

Fixed &Fixed::operator++(void)
{
    ++this->_nb;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++this->_nb;
    return temp;
}

Fixed &Fixed::operator--(void)
{
    --this->_nb;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --this->_nb;
    return temp;
}

bool Fixed::operator<(const Fixed &src) const
{
    if (this->_nb < src._nb)
        return true;
    return false;
}

bool Fixed::operator>(const Fixed &src) const
{
    if (this->_nb > src._nb)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &src) const
{
    if (this->_nb <= src._nb)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &src) const
{
    if (this->_nb >= src._nb)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &src) const
{
    if (this->_nb == src._nb)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &src) const
{
    if (this->_nb != src._nb)
        return true;
    return false;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
