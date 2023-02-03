#include "header.hpp"

int main(void)
{
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    const Animal* animals[6];

    for (int i(0); i < 6; i++)
    {
        if (i >= 0 && i < 3)
            animals[i] = new Cat();
        if (i >= 3 && i < 6)
            animals[i] = new Dog();
    }

    std::cout << "this is a <<<<<<<<< " << animals[0]->getType() << " >>>>>>>>>>\n";
    std::cout << "this is a <<<<<<<<< " << animals[5]->getType() << " >>>>>>>>>>\n";

    Dog obj;
    obj.setIdea("eat");
    obj.setIdea("sleep");
    {
        Dog obj1(obj);
    }
    std::cout << "************* "<< obj.getIdea(0) << " *************" << '\n';
    std::cout << "************* "<< obj.getIdea(1) << " *************" << '\n';
    
    for (int i(0); i < 6; i++)
        delete animals[i];   

    delete cat;//should not create a leak
    delete dog;
    return (0);
}