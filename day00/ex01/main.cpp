#include "header.hpp"

int main()
{
	Phonebook test;
	std::string prompt;
	int	counter;

	counter = 0; // to know if it was the first time i enter to the program
	while (1)
	{
		std::cout << "enter a command : ";
		getline(std::cin, prompt);
		if (prompt == "ADD" || prompt == "add")
			test.add_contact(counter);
		else if (prompt == "SEARCH" || prompt == "search")
		{
			test.print();
			test.search_contact();
		}
		else if (prompt == "EXIT" || prompt == "exit")
			exit(0);
		counter++;
	}
	return (0);
}