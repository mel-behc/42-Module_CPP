#include "header.hpp"

int main(void)
{
	try
	{
		Bureaucrat hamid("hamid", 15);
		Form partners("partenariat", 2, 2);
		// hamid.increaseGrade(1000);
		hamid.decreaseGrade();
		std::cout << hamid;
		std::cout << partners;
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
	
	return (0);
}
