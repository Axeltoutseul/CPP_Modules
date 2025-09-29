#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>void display_element(T element)
{
    std::cout << element << std::endl;
}

template<typename T>void iter(T *array, int length, void (*f)(T))
{
    int i = 0;
    while (i < length)
        f(array[i++]);
}

#endif
