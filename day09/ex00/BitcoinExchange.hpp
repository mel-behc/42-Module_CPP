#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <map>

#define MAX_YEAR 2022
#define MIN_YEAR 2009
#define MAX_MONTH 12 
#define MIN_MONTH 1
#define MAX_DAY 31
#define MIN_DAY 1


typedef struct s_values
{
    std::string date;
    float dvalue;
}t_values;

void    fillMap(std::map< std::string, std::string >& data, std::string& line);
bool    checkLineFormat(std::string& line);
float   decimalBtcValue(std::string& line);
void    applieOperation(std::map< std::string, std::string >& data, std::string& line);
void    printResult(std::string& date, float btcValue, float result);


#endif