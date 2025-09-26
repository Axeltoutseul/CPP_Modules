#include "Serializer.hpp"

void display_address(void *ptr)
{
    char *str = static_cast<char *>(ptr);
    std::cout << str << std::endl;
}

int main(void)
{
    Serializer new_serializer;
    Data ptr;
    uintptr_t nb = new_serializer.serialize(&ptr);
    std::cout << std::endl;
    std::cout << nb << std::endl;
    std::cout << new_serializer.deserialize(nb) << std::endl;
    std::cout << std::endl;
    return 0;
}
