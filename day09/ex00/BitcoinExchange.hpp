#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <map>

#define MAX_YEAR 2022
#define MIN_YEAR 2009
#define MAX_MONTH 12 
#define MIN_MONTH 1
#define MAX_DAY 31
#define MIN_DAY 1


void    fillMap(std::map< std::string, std::string >& data, std::string& line);
void    checkLineFormat(std::string& line);

// class BitcoinExchange
// {
//     private:

//     public:
//     BitcoinExchange();
//     BitcoinExchange(const BitcoinExchange& obj);
//     BitcoinExchange& operator=(const BitcoinExchange& obj);
//     ~BitcoinExchange();

// };

#endif