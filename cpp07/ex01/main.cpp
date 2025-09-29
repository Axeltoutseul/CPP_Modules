#include "iter.hpp"

int main(void)
{
    std::string strs[3] = {"int", "char", "string"};
    int length = sizeof(strs) / sizeof(strs[0]);
    iter(strs, length, &display_element);
    std::cout << std::endl;

    int numbers[5] = {1, 2, 3, 4, 5};
    int length2 = sizeof(numbers) / sizeof(numbers[0]);
    iter(numbers, length2, &display_element);
    return 0;
}
