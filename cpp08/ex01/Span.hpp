#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <bits/stdc++.h>

class Span {

    public:

    Span();
    Span(unsigned int N);
    Span(const Span &other);
    ~Span();
    Span &operator=(const Span &other);
    unsigned int getSize();
    unsigned int getMaxSize();
    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();

    class AlreadyFullException : public std::exception {
        public:
        const char *what() const throw() {
            return "The array can't store one more number";
        }
    };

    class NoSpanException : public std::exception {
        public:
        const char *what() const throw() {
            return "You must have at least two numbers to find a span";
        }
    };

    private:

    std::vector<int> _array;
    unsigned int _size_max;
};

#endif
