#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <algorithm>

class NotFoundException : public std::exception {

    public:
    const char *what() const throw() {
        return "The occurrence is not found";
    }
};

template<typename T>
typename T::iterator find_occurrence(T &array, int nb)
{
    typename T::iterator it = find(array.begin(), array.end(), nb);
    if (it == array.end())
        throw NotFoundException();
    return it;
}

#endif
