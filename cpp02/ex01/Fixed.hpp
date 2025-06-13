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


    private:

    int _nb;
    static const int _number_of_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
