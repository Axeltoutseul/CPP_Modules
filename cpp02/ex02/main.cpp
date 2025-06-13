#include "Fixed.hpp"

int main(void)
{
    Fixed           a;
    Fixed const     b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

/*int main(void)
{
    Fixed   a(12);
    Fixed b(a);
    Fixed c(Fixed( 8.88f ) + Fixed( 4 ) );
    Fixed d(Fixed( 8.88f ) - Fixed( 7.88f ) );
    Fixed e(Fixed( 1.5f ) / Fixed( 2 ) );
    Fixed f(Fixed( 8.88f ) < Fixed( 2 ) );
    Fixed g(Fixed( 10.2f ) == Fixed( 10.2f ) );

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
}*/
