#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string *stringPTR;
    std::string& stringREF = str;

    stringPTR = &str;
    str = "HI THIS IS BRAIN";
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

}