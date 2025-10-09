#include "Span.hpp"

Span::Span() : _size_max(0), _array(new int[_size_max])
{
    this->_current_size = 0;
}

Span::Span(unsigned int N) : _size_max(N), _array(new int[_size_max])
{
    this->_current_size = 0;
}

Span::Span(const Span &other) : _size_max(other._size_max), _array(new int[_size_max])
{
    for (int i = 0; i < other._size_max; i++)
        this->_array[i] = other._array[i];
    this->_current_size = other._current_size;
    this->_size_max = other._size_max;
}

Span::~Span()
{
    delete[] this->_array;
}

Span &Span::operator=(const Span &other)
{
    this->_current_size = other._current_size;
    this->_size_max = other._size_max;
    this->_array = new int[_size_max]; 
    for (int i = 0; i < other._size_max; i++)
        this->_array[i] = other._array[i];
    return *this;
}

int Span::getSize()
{
    return this->_current_size;
}

void Span::displayValues()
{
    for (int i = 0; i < this->_current_size; i++)
    {
        std::cout << this->_array[i];
        if (i < this->_current_size - 1)
            std::cout << " ";
    }
    if (this->_current_size > 0)
        std::cout << std::endl;
}

void Span::addNumber(int nb)
{
    if (this->_current_size == this->_size_max)
        throw(AlreadyFullException());
    this->_array[_current_size] = nb;
    this->_current_size++;
}

int Span::Min()
{
    if (this->_current_size < 2)
        throw NoSpanException();
    int nb = this->_array[0];
    int i = 0;
    while (i < this->_current_size)
    {
        if (nb > this->_array[i])
            nb = this->_array[i];
        i++;
    }
    return nb;
}

int Span::Max()
{
    if (this->_current_size < 2)
        throw NoSpanException();
    int nb = this->_array[0];
    int i = 0;
    while (i < this->_current_size)
    {
        if (nb < this->_array[i])
            nb = this->_array[i];
        i++;
    }
    return nb;
}

int Span::shortestSpan()
{
    if (this->_current_size < 2)
        throw NoSpanException();
    this->sortIntTab();
    int span = this->_array[1] - this->_array[0];
    if (this->_current_size == 2)
        return span;
    for (int i = 0; i < this->_current_size - 1; i++)
    {
        if (span > (this->_array[i + 1] - this->_array[i]))
            span = this->_array[i + 1] - this->_array[i];
    }
    return span;
}

int Span::longestSpan()
{
    int span = this->Max() - this->Min();
    return span;
}

void Span::sortIntTab()
{
    int i = 0;
    int temp;
    while (i < this->_current_size - 1)
    {
        if (this->_array[i] > this->_array[i + 1])
        {
            temp = this->_array[i];
            this->_array[i] = this->_array[i + 1];
            this->_array[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}
