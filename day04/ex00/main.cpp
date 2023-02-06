#include "header.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *lion, *tigre;

    lion = new WrongCat();
    tigre = new WrongCat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl;
    std::cout << lion->getType() << " " << std::endl;
    std::cout << tigre->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();

    meta->makeSound();
    lion->makeSound();
    tigre->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete lion;
    delete tigre;
    return (0);
}