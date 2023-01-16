#include "megaphone.hpp"

std::string	capitalise_str(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
	else
	{
		while (av[i])
		{
			std::cout << capitalise_str(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
}