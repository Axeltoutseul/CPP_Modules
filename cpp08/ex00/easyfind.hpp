#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

class NotFoundException : public std::exception {

    public:
    const char *what() const throw() {
        return "The occurrence is not found";
    }
};

template<typename T>
T find_occurrence(T *array, int nb)
{
    int i = 0;
    while (array[i] && array[i] != nb)
        i++;
    if (!array[i])
        throw NotFoundException();
    return array[i];
}

#endif
