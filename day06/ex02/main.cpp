#include "header.hpp"

Base* generate() 
{
    int random;

    random = std::rand() % 3;
    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else if (random == 2)
        return new C();
    else
        return nullptr;
}

void identify(Base* p) 
{
    Base *classA = dynamic_cast<A*>(p);
    Base *classB = dynamic_cast<B*>(p);
    Base *classC = dynamic_cast<C*>(p);
    
    if (classA) 
        std::cout << "This is class A : " << &classA << '\n';
    else if (classB) 
        std::cout << "This is class B : " << &classB << '\n'; 
    else if (classC) 
        std::cout << "This is class C : " << &classC << '\n'; 
    else
        std::cout << "Unknown class \n";
}

void identify(Base& p) 
{
    try 
    {
        Base &classA = dynamic_cast<A&>(p);
        std::cout << "This is class A : " << &classA << '\n';
    } 
    catch (std::bad_cast&) {}
    try 
    {
        Base &classB = dynamic_cast<B&>(p);
        std::cout << "This is class B : " << &classB << '\n';

    } 
    catch (std::bad_cast&) {}
    try 
    {
        Base &classC = dynamic_cast<C&>(p);
        std::cout << "This is class C : " << &classC << '\n';
    } 
    catch (std::bad_cast&) {}
}

int main(void) 
{
    Base* p;
    std::srand(time(NULL));

    p = generate();

    identify(p);
    identify(*p);

    delete p;
    return 0;
}