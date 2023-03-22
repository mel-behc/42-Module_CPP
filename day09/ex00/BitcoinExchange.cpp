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

void applieOperation(std::map< std::string, std::string >& data, std::string& line)
{
    std::map< std::string, std::string >::iterator it;
    t_values values;
    float dNumber;
    float tmp;

    values.date = line.substr(0, 10);
    tmp = decimalBtcValue(line);
    if (tmp == 0)
        return ;
    it = data.find(values.date);
    if (it == data.end())
        it = data.upper_bound(values.date);
    std::stringstream convertValue(it->second);
    convertValue >> dNumber;
    values.dvalue = tmp * dNumber;
    printResult(values.date, tmp, values.dvalue);
}

void printResult(std::string& date, float btcValue, float result)
{
    std::cout << date << " => " << btcValue << " = " << result << '\n';
}