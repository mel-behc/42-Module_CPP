#include "header.hpp"

int main()
{    
    try 
    {
        Bureaucrat hamid("hamid", 16);
        AForm *form = new PresidentialPardonForm("chtiwa");
        form->beSigned(hamid);
        hamid.executeForm(*form);
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}