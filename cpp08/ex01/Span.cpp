#include "Span.hpp"

Span::Span() : _size_max(0), _array(new int[_size_max])
{
    this->_current_size = 0;
}

Span::Span(unsigned int N) : _size_max(N), _array(new int[_size_max])
{
    this->_current_size = 0;
}

Span::Span(const Span &other)
{
    for (int i = 0; i < other._size_max; i++)
        this->_array[i] = other._array[i];
    this->_current_size = other._current_size;
    this->_size_max = other._size_max;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
    for (int i = 0; i < other._size_max; i++)
        this->_array[i] = other._array[i];
    this->_current_size = other._current_size;
    this->_size_max = other._size_max;
    return *this;
}

int Span::GetSize()
{
    return this->_current_size;
}

void Span::DisplayValues()
{
    for (int i = 0; i < this->_current_size; i++)
    {
        std::cout << this->_array[i];
        if (i < this->_current_size - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}

void Span::addNumber(int nb)
{
    this->_array[_current_size] = nb;
    this->_current_size++;
}

int Span::Min()
{
    if (!this->_array)
        return -1;
    int nb = this->_array[0];
    int i = 0;
    while (this->_array[i])
    {
        if (nb > this->_array[i])
            nb = this->_array[i];
        i++;
    }
    return nb;
}

int Span::Max()
{
    if (!this->_array)
        return -1;
    int nb = this->_array[0];
    int i = 0;
    while (this->_array[i])
    {
        if (nb < this->_array[i])
            nb = this->_array[i];
        i++;
    }
    return nb;
}

void Span::SortIntTab()
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
