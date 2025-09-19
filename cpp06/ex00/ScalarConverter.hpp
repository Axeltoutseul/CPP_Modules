#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <stdlib.h>

int is_digit(const std::string arg);
int is_special_value(std::string str);
int is_special_value_with_f(std::string str);
long my_stol(const std::string str);
std::string shortened_string(std::string str);

class ScalarConverter {

    public:

    ScalarConverter();
    ~ScalarConverter();
    int IsChar(std::string arg);
    void ConvertToChar(const std::string content);
    void ConvertToInt(const std::string content);
    void ConvertToFloat(const std::string content);
    void ConvertToDouble(const std::string content);


    private:
};

#endif
