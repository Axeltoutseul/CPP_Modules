#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    return;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter::~ScalarConverter()
{
    return;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

int ScalarConverter::IsChar(const std::string arg)
{
    if (((arg[0] >= 32 && arg[0] <= 47) || (arg[0] >= 58 && arg[0] <= 126)) && arg.size() == 1)
        return 1;
    return 0;
}

int ScalarConverter::IsInt(const std::string arg)
{
    long nb = my_stol(arg);
    int i = 0;
    int length = arg.size();

    if (nb < -2147483648 || nb > 2147483647)
        return 0;
    if ((arg[0] == '+' || arg[0] == '-') && length > 1)
        i++;
    while (arg[i])
    {
        if (arg[i] < '0' || arg[i] > '9')
            return 0;
        i++;
    }
    if (i == length)
        return 1;
    return 0;
}

int ScalarConverter::IsFloat(const std::string arg)
{
    if (is_special_value_with_f(arg))
        return 1;
    if (count_occurrences(arg, '.') != 1)
        return 0;
    int i = 0;
    if ((arg[0] == '+' || arg[0] == '-') && arg.size() > 1)
        i++;
    while (arg[i + 1])
    {
        if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
            return 0;
        i++;
    }
    if (arg[i] == 'f' && arg[i - 1] != '.')
        return 1;
    return 0;
}

int ScalarConverter::IsDouble(const std::string arg)
{
    if (is_special_value(arg))
        return 1;
    if (count_occurrences(arg, '.') != 1)
        return 0;
    int i = 0;
    if ((arg[0] == '+' || arg[0] == '-') && arg.size() > 1)
        i++;
    while (arg[i])
    {
        if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
            return 0;
        i++;
    }
    if (arg[i - 1] == '.')
        return 0;
    return 1;
}

void ScalarConverter::ConvertChar(std::string content)
{
    char c = content[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::ConvertInt(const std::string content)
{
    long nb = my_stol(content);

    if (nb >= 32 && nb <= 126)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else if (nb < 0)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << nb << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

void ScalarConverter::ConvertFloat(const std::string content)
{
    long nb = my_stol(content);
    float my_float = strtof(content.c_str(), NULL);

    if (is_special_value_with_f(content))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        if (nb >= 32 && nb <= 126)
            std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
        else if (nb < 0)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << nb << std::endl;
    }
    if (my_float - nb == 0)
    {
        std::cout << "float: " << my_float << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(my_float) << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << my_float << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(my_float) << std::endl;
    }
}

void ScalarConverter::ConvertDouble(const std::string content)
{
    long nb = my_stol(content);
    double my_double = strtod(content.c_str(), NULL);

    if (is_special_value(content))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        if (nb >= 32 && nb <= 126)
            std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
        else if (nb < 0)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << nb << std::endl;
    }
    if (my_double - nb == 0)
    {
        std::cout << "float: " << static_cast<float>(my_double) << ".0f" << std::endl;
        std::cout << "double: " << my_double << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(my_double) << "f" << std::endl;
        std::cout << "double: " << my_double << std::endl;
    }
}

void ScalarConverter::DisplayConversion(const std::string arg)
{
    if (IsChar(arg))
        this->ConvertChar(arg);
    else if (IsInt(arg))
        this->ConvertInt(arg);
    else if (IsFloat(arg))
        this->ConvertFloat(arg);
    else if (IsDouble(arg))
        this->ConvertDouble(arg);
    else
        std::cout << "Error ! " << arg << " has no type !" << std::endl;
}
