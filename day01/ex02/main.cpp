#include <iostream>
#include <string>


int main(void)
{
    std::string str;
    std::string *stringPtr;
    std::string& stringRef = str;

    str = "HI THIS IS BRAIN";
    stringPtr = &str;
    std::cout << &str << '\n';
    std::cout << stringPtr << '\n';
    std::cout << &stringRef << '\n';
    std::cout << str << '\n';
    std::cout << *stringPtr << '\n';
    std::cout << stringRef << '\n';
    return (0);
}