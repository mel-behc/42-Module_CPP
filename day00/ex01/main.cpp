#include "header.hpp"

int main()
{
	Phonebook book;
	std::string prompt;
	int	counter;

	counter = 0; // to know if it is the first time the program enter
	while (1)
	{
		std::cout << "enter a command : ";
		getline(std::cin, prompt);
		if (prompt == "ADD" || prompt == "add")
			book.add_contact(counter);
		else if (prompt == "SEARCH" || prompt == "search")
		{
			book.print();
			book.search_contact();
		}
		else if (prompt == "EXIT" || prompt == "exit")
			exit(0);
		counter++;
	}
	return (0);
}