#include "Span.hpp"

Span::Span() : _array(), _size_max(0)
{
}

Span::Span(unsigned int N) : _array(), _size_max(N)
{
}

Span::Span(const Span &other) : _array(0), _size_max(other._size_max)
{
    this->_array = other._array; 
    this->_size_max = other._size_max;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_size_max = other._size_max;
        this->_array = other._array; 
    }
    return *this;
}

unsigned int Span::getSize()
{
    return this->_array.size();
}

unsigned int Span::getMaxSize()
{
    return this->_size_max;
}

void Span::addNumber(int nb)
{
    if (this->_array.size() == this->_size_max)
        throw AlreadyFullException();
    std::vector<int>::iterator it = this->_array.end();
    this->_array.insert(it, nb);
}

int Span::shortestSpan()
{
    if (this->_array.size() < 2)
        throw NoSpanException();
    std::sort(this->_array.begin(), this->_array.end());
    std::vector<int>::iterator a = this->_array.begin();
    std::vector<int>::iterator b = a;
    b++;
    int span = *b - *a;
    while (b < this->_array.end())
    {
        if (span > *b - *a)
            span = *b - *a;
        a++;
        b++;
    }
    return span;
}

int Span::longestSpan()
{
    if (this->_array.size() < 2)
        throw NoSpanException();
    std::sort(this->_array.begin(), this->_array.end());
    std::vector<int>::iterator min = this->_array.begin();
    std::vector<int>::iterator max = this->_array.end();
    max--;
    int span = *max - *min;
    return span;
}
