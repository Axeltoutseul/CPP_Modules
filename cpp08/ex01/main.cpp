#include "Span.hpp"

int main(void)
{
    Span sp(4);
    sp.addNumber(8);
    sp.addNumber(3);
    sp.addNumber(10);
    sp.addNumber(4);
    sp.SortIntTab();
    sp.DisplayValues();
    return 0;
}
