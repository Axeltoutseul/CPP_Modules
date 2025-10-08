#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>

class Span {

    public:

    Span();
    Span(unsigned int N);
    Span(const Span &other);
    ~Span();
    Span &operator=(const Span &other);
    int GetSize();
    void DisplayValues();
    void addNumber(int nb);
    int Min();
    int Max();
    void SortIntTab();

    class AlreadyFullException {
        public:
        const char *what() const throw() {
            return "The array can't store one more number";
        }
    };

    class NoSpanException {
        public:
        const char *what() const throw() {
            return "You must have at least two numbers to find a span";
        }
    };

    private:

    int _current_size;
    int _size_max;
    int *_array;
};

#endif
