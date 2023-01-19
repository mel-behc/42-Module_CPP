#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl obj;
    int  i;
    std::string array[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    if (argc != 2)
        return (0);
	i = 0;
    for (; i < 4; i++)
    {
		if (array[i] == argv[1])
			break ;
	}
	switch (i) {
		case 0:
			obj.complain("DEBUG");
            break;
		case 1:
			obj.complain("INFO");
            break;
		case 2:
			obj.complain("WARNING");
            break;
		case 3:
			obj.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << '\n';
            break;
    }
}