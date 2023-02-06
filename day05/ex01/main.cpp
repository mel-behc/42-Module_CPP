#include "header.hpp"

int main(void)
{
	try
	{
		Bureaucrat hamid("hamid", 15);

		// hamid.increaseGrade(1000);
		hamid.decreaseGrade();

		std::cout << hamid;
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
	
	return (0);
}
