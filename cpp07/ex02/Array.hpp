#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <bits/stdc++.h>

template<typename T> class Array {

    public:

    Array() : _new_array(new T[0]())
    {
        //throw(IndexNotFoundException());
    }

    Array(unsigned int n) : _size(n), _new_array(new T[_size]())
    {
        for (unsigned int i = 0; i < n; i++)
            _new_array[i] = i + 1;
    }

    Array(const Array &other) : _size(other._size), _new_array(new T[_size]())
    {
        for (size_t i = 0; i < this->_size; i++)
            this->_new_array[i] = other._new_array[i];
    }

    ~Array()
    {
    }

    Array &operator=(const Array &other)
    {
        this->_size = other._size;
        for (size_t i = 0; i < other.length; i++)
            this->_new_array[i] = other._new_array[i];
        return *this;
    }

    T &operator[](const std::size_t n)
    {
        if (n >= this->_size)
            throw(IndexNotFoundException());
        return this->_new_array[n];
    }

    std::size_t GetSize()
    {
        return this->_size;
    }

    class IndexNotFoundException : public std::exception {

        public:
        const char *what() const throw() {
            return "Index out of range";
        }
    };


    private:

    std::size_t _size;
    T *_new_array;
};

#endif
