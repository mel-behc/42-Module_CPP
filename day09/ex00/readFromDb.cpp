#include "BitcoinExchange.hpp"

void    fillMap(std::map< std::string, std::string >& data, std::string& line)
{
    std::string key;
    std::string value;

    if (line[0] >= '0' && line[0] <= '9')
    {
        key = line.substr(0, 10);
        value = line.substr(11, (line.length() - 10));
        data.insert( std::pair<std::string, std::string>(key, value) );
    }
}