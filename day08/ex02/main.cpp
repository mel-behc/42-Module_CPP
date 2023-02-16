#include "MutantStack.hpp"

int main()
{
    {   
        // MutantStack
        MutantStack<int> mutantStack;
        mutantStack.push(5);
        mutantStack.push(17);

        std::cout << mutantStack.top() << std::endl;
        
        mutantStack.pop(); // remove teh first element on the top of the stack
        
        std::cout << mutantStack.size() << std::endl;
        
        mutantStack.push(3);
        mutantStack.push(5);
        mutantStack.push(737); 
        //[...]
        mutantStack.push(0);
        
        MutantStack<int>::iterator it = mutantStack.begin();
        MutantStack<int>::iterator itt = mutantStack.end();
        
        ++it;
        --it;
        
        while (it != itt)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        // std::stack<int> s(mutantStack);
    }

    // std::cout << "######################################\n";
    
    // {
    //     // list
    //     std::list<int> mutantStack;
    //     mutantStack.push_back(5);
    //     mutantStack.push_back(17);
    //     std::cout << mutantStack.back() << std::endl;
    //     mutantStack.pop_back();
    //     std::cout << mutantStack.size() << std::endl;
    //     mutantStack.push_back(3);
    //     mutantStack.push_back(5);
    //     mutantStack.push_back(737);
    //     //[...]
    //     mutantStack.push_back(0);
    //     std::list<int>::iterator it = mutantStack.begin();
    //     std::list<int>::iterator ite = mutantStack.end();
    //     ++it;
    //     --it;
    //     while (it != ite)
    //     {
    //     std::cout << *it << std::endl;
    //     ++it;
    //     }
    //     std::list<int> s(mutantStack);
    // }
    return (0);
}
