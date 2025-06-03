#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

    public:

    Fixed(void);
    Fixed(const Fixed &src);
    ~Fixed(void);
    Fixed &operator=(const Fixed &src);
    int getRawBits(void);
    void setRawBits(int const raw);


    private:

    int fixed_int;
    static const int nb_of_bits = 8;
};

#endif
