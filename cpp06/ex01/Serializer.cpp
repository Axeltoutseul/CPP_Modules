#include "Serializer.hpp"

struct Data NewData(struct Data src)
{
    struct Data dest;
    dest.nb = src.nb;
    dest.str = src.str;
    return dest;
};

Serializer::Serializer()
{
    std::cout << "Serializer : Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
    (void)other;
    std::cout << "Serializer : Copy constructor called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Serializer : Destructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    (void)other;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t nb = reinterpret_cast<uintptr_t>(ptr);
    return nb;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *my_data = reinterpret_cast<Data *>(raw);
    return my_data;
}
