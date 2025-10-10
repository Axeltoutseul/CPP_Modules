#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <bits/stdc++.h>

template<typename T> class Array {

    public:

    Array();
    Array(unsigned int n);
    Array(const Array &other);
    ~Array();
    Array &operator=(const Array &other);
    T &operator[](const std::size_t n);
    std::size_t GetSize();

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

template<typename T>
Array<T>::Array() : _new_array(new T[0]())
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _new_array(new T[_size]())
{
}

template<typename T>
Array<T>::Array(const Array &other) : _size(other._size), _new_array(new T[_size]())
{
    for (size_t i = 0; i < this->_size; i++)
        this->_new_array[i] = other._new_array[i];
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->_new_array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    this->_size = other._size;
    for (size_t i = 0; i < other.length; i++)
        this->_new_array[i] = other._new_array[i];
    return *this;
}

template<typename T>
T &Array<T>::operator[](const std::size_t n)
{
    if (n < 0 || n >= this->_size)
        throw(IndexNotFoundException());
    return this->_new_array[n];
}

template<typename T>
std::size_t Array<T>::GetSize()
{
    return this->_size;
}

#endif
