#include "BitcoinExchange.hpp"

// 1- check the database is valide and can be open : ok
// 2- store data from the database in a container (map) : ok
// 3- check the input file if it's valide and can be open to read from it : ok
// 4- check the line format "date | value" : ok
// 5- check the date format year-month-day : ok
// 6- check the value :: 0 <= value <= 1000 : ...
// 7- multiplie value of btc according to the date by the number of btcs : ...
// 8- error msg if something wrong (invalid date / invalide value / invalide line) : ...


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
        std::cout << "Error: database not found !\n";
    else
    {
        while (std::getline(file, line))
            fillMap(data, line);
        // std::cout << "Storing data succefully in map \n";
        // it = data.find("2011-10-26");
        // if (it != data.end())
        // {
        //     int num;
        //     std::stringstream convertValue(it->second);
        //     convertValue >> num;
        //     std::cout << "key " << it->first << " value " << num << '\n';
        // }
        // else
        //     std::cout << "mooskila!\n";
        std::ifstream file(av[1]);
        if (!file.is_open())
            std::cout << "Error: input file not found !\n";
        else
        {
            std::getline(file, line);
            while (std::getline(file, line))
                checkLineFormat(line);
            // std::cout << "Done \n";
        }
    }
    return (0);
}



// while (std::getline(file, line))
// {
//    std::cout << line << '\n';
//    key = line.substr(0, 10);
//    value = line.substr(11, (line.length() - 10));
// }