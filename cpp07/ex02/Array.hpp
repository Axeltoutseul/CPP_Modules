#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T> class Array {

    public:

    Array() : _new_array(new T[0]())
    {
    }

    Array(unsigned int n) : _size(n), _new_array(new T[n]())
    {
    }

    Array(const Array &other) : _size(other._size), _new_array(new T[_size]())
    {
    }

    ~Array()
    {
    }

    Array &operator=(const Array &other)
    {
        this->_size = other._size;
        for (int i = 0; i < other.length; i++)
            this->_new_array[i] = other._new_array[i];
        return *this;
    }

    T operator [](std::size_t n)
    {
        return this->_new_array[n];
    }

    std::size_t GetSize()
    {
        return this->_size;
    }


    private:

    std::size_t _size;
    T *_new_array;
};

#endif
