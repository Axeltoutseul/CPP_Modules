#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

    public:

    Fixed(void);
    Fixed(const Fixed &src);
    ~Fixed(void);
    Fixed &operator=(const Fixed &src);
    int getRawBits(void) const;
    void setRawBits(int const raw);


    private:

    int _nb;
    static const int _number_of_bits = 8;
};

#endif
