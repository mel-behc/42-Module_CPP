#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    std::ifstream file("data.csv");
    std::string line;
    
    std::map< std::string, std::string > data;
    std::map< std::string, std::string >::iterator it;
    std::string key;
    std::string value;

    if (ac != 2)
    {
        std::cout << "Error: not enough arguments!. \n";
        return (0);
    } 
    if (!file.is_open())
        std::cout << "Error: could not open database file. !\n";
    else
    {
        while (std::getline(file, line))
            fillMap(data, line);
        std::ifstream file(av[1]);
        if (!file.is_open())
            std::cout << "Error: could not open file. \n";
        else
        {
            std::getline(file, line);
            while (std::getline(file, line))
            {
                if(checkLineFormat(line))
                    applieOperation(data, line);
            }
        }
    }
    return (0);
}