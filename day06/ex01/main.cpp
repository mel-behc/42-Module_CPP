#include "Serializer.hpp"

int main(void)
{
    Serializer obj;
    Data strct;

    Data *ptr = &strct;

    // value of int a int data
    strct.a = 5;
    std::cout << "a = " << ptr->a << '\n';

    // seriailze the uintptr
    uintptr_t serialized = obj.serialize(ptr);
    std::cout << "serializing : " << serialized << '\n';
    
    // deseriailze the uintptr
    Data *deserialized = obj.deserialize(serialized);
    std::cout << "deserializing : " << deserialized << '\n';

    // after the the reintrpret cast
    std::cout << "a = " << deserialized->a << '\n';

    return (0);
}