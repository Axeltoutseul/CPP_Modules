#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

/*int main(void)
{
    try
    {
        Span sp(7);
        Span mirror(sp);
        srand(time(NULL));
        int nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        nb = rand() % 10000 + 1;
        mirror.addNumber(nb);
        mirror.displayValues();
        std::cout << mirror.shortestSpan() << std::endl;
        std::cout << mirror.longestSpan() << std::endl;
    }
    catch(const Span::AlreadyFullException &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Span::NoSpanException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}*/
