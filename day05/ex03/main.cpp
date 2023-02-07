#include "header.hpp"

int main()
{    
    try 
    {
        Bureaucrat Staff("Stuff", 5);
        Intern someRandomIntern;

        AForm* rrf;
        rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
        if (rrf)
        {
            rrf->beSigned(Staff);
            Staff.signForm(*rrf);
            rrf->execute(Staff);
        }
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}