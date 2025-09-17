#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <stdlib.h>

class ScalarConverter {

    public:

    ScalarConverter();
    ~ScalarConverter();
    int IsDigit(std::string arg);
    int IsChar(std::string arg);
    void ConvertToChar(const std::string content);
    void ConvertToInt(const std::string content);
    void ConvertToFloat(const std::string content);
    void ConvertToDouble(const std::string content);


    private:
};

#endif
