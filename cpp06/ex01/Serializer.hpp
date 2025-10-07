#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <stdint.h>

struct Data
{
    int nb;
    std::string str;
};

class Serializer
{
    public:

    Serializer();
    Serializer(const Serializer &other);
    ~Serializer();
    Serializer &operator=(const Serializer &other);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif
