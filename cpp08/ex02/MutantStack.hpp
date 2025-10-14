#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {

    public:

    MutantStack();
    MutantStack(const MutantStack &other);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &other);
    MutantStack &operator++();
    MutantStack &operator--();

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev;

    iterator begin();
    iterator end();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
    *this = other;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator++()
{
    ++this->emplace;
    return *this;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator--()
{
    --this->emplace;
    return *this;
}

#endif
