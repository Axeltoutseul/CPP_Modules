#include "iter.hpp"

int main(void)
{
    std::string strs[3] = {"int", "char", "string"};
    int length = sizeof(strs) / sizeof(strs[0]);
    iter(strs, length, &display_element);
    std::cout << std::endl;

    char letters[5] = {"iter"};
    length = sizeof(letters) / sizeof(letters[0]) - 1;
    iter(letters, length, &display_element);
    std::cout << std::endl;

    int numbers[5] = {1, 2, 3, 4, 5};
    length = sizeof(numbers) / sizeof(numbers[0]);
    iter(numbers, length, &display_element);
    std::cout << std::endl;

    double decimals[5] = {0.1, 2.4, 5.3, 11.1, 27.44};
    length = sizeof(decimals) / sizeof(decimals[0]);
    iter(decimals, length, &display_element);
    return 0;
}
