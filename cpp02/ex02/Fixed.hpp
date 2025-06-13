#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

    public:

    Fixed(void);
    Fixed(const Fixed &src);
    Fixed(const int nb);
    Fixed(const float fixed_float);
    ~Fixed(void);

    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed &operator=(const Fixed &src);
    Fixed operator+(const Fixed &src);
    Fixed operator-(const Fixed &src);
    Fixed operator*(const Fixed &src);
    Fixed operator/(const Fixed &src);

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);

    bool operator<(const Fixed &src) const;
    bool operator>(const Fixed &src) const;
    bool operator<=(const Fixed &src) const;
    bool operator>=(const Fixed &src) const;
    bool operator==(const Fixed &src) const;
    bool operator!=(const Fixed &src) const;

    static Fixed min(Fixed &a, Fixed &b);
    static const Fixed min(const Fixed &a, const Fixed &b);
    static Fixed max(Fixed &a, Fixed &b);
    static const Fixed max(const Fixed &a, const Fixed &b);


    private:

    int _nb;
    static const int _number_of_bits = 8;
};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);

#endif
