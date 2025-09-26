#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <stdlib.h>

int count_occurrences(const std::string arg, const char c);
std::string ft_strncpy(std::string dest, const std::string src, unsigned int n);
int is_digit(const std::string arg);
int is_special_value(std::string str);
int is_special_value_with_f(std::string str);
long my_stol(const std::string str);
std::string shortened_string(std::string str);

class ScalarConverter {

    public:

    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &other);
    int IsChar(std::string arg);
    int IsInt(const std::string arg);
    int IsFloat(const std::string arg);
    int IsDouble(const std::string arg);
    void ConvertChar(const std::string content);
    void ConvertInt(const std::string content);
    void ConvertFloat(const std::string content);
    void ConvertDouble(const std::string content);
    void DisplayConversion(const std::string arg);


    private:
};

#endif
