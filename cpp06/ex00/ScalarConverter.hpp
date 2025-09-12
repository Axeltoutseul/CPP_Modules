#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <stdlib.h>

int is_digit(const char *arg);

class ScalarConverter {

    public:

    ScalarConverter();
    ~ScalarConverter();
    char convertToChar(char *content);
    int convertToInt(char *content);


    private:
};

#endif
