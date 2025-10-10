#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack {

    public:

    MutantStack();
    MutantStack(const MutantStack &other);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &other);
};


template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
    (void)other;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    (void)other;
    return *this;
}

#endif
