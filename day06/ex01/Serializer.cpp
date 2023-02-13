#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& obj)
{
    *this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
    (void) obj;
    return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
    std::uintptr_t var;

    var = reinterpret_cast<std::uintptr_t>(ptr);
    return (var);
}
        
Data* Serializer::deserialize(uintptr_t raw)
{
    Data *var;

    var = reinterpret_cast<Data *>(raw);
    return(var);
}