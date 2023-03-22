#include "BitcoinExchange.hpp"

// check the format of line : ok
// 1- checke the year : 2009 <= year <= 2022 : ok
// 2- checke the month : 01 <= month <= 12 : ok
// 3- checke the day : 01 <= day <= 31 : ok


static bool checkChars(std::string& line)
{
    size_t length;

    length = 0;
    for (size_t i = 0; i < line.size(); ++i)
    {
        if (isdigit(line[i]) == 1 || line[i] == '-' || line[i] == '|' || line[i] == '.' || line[i] == ' ')
            length++;
        else
            length = 0;
    }
    if (length == line.size())
        return (true);
    return (false);
}

static bool pipDelimter(std::string& line)
{
    for (size_t i = 0; i < line.size(); ++i)
    {
        if (line[i] == '|')
        {
            if (line[i - 1] == ' ' && line[i + 1] == ' ' && i == 11)
                break;
            else
                return (false);
        }
        if (i == (line.size() - 1))
            return (false);
    }
    return (true);
}

static bool checkDateFormat(std::string& line)
{
    if (line[4] != '-' || isdigit(line[3]) == 0 || isdigit(line[5]) == 0)
        return (false);
    if (line[7] != '-' || isdigit(line[6]) == 0 || isdigit(line[8]) == 0)
        return (false);
    return (true);
}

int checkYear(std::string& line)
{
    std::string year;
    int value;

    year = line.substr(0, 4);
    std::stringstream yr(year);
    yr >> value;
    if (value >= MIN_YEAR && value <= MAX_YEAR)
        return (value);
    return (0);
}

int checkMonth(std::string& line)
{
    std::string month;
    int value;

    month = line.substr(5, 2);
    std::stringstream mn(month);
    mn >> value;
    if (value >= MIN_MONTH && value <= MAX_MONTH)
        return (value);
    return (0);
}

int checkDay(std::string& line)
{
    std::string day;
    int value;

    day = line.substr(8, 2);
    std::stringstream dy(day);
    dy >> value;
    if (value >= MIN_DAY && value <= MAX_DAY)
        return (value);
    return (0);
}

static bool commaChecker(std::string& line)
{
    int counter;
    size_t i;

    counter = 0;
    i = -1;
    if (line[0] == '-')
        i = 0;
    while (line[++i])
    {
        if (line[i] == '.' || !isdigit(line[i]))
            counter++;
    }
    if (counter == 0 || counter == 1)
        return (true);
    return (false);
}

static bool checkValue(std::string& line)
{
    std::string btcValue;

    btcValue = &line[13];
    if (commaChecker(btcValue))
        return (true);
    return (false);
}


float decimalBtcValue(std::string& line)
{
    std::string btc;
    float dValue = 0;
    size_t i;

    i = 12;
    while (line[++i])
    {
        if (line[i] == '.')
        {
            if (isdigit(line[i + 1]) == 0)
            {
                std::cout << "Error: bad input !\n";
                return (0);
            }
            else
                break;
        }
    }
    btc = line.substr(13, (line.size() - 13));
    std::stringstream value(btc);
    value >> dValue;
    if (dValue > 1000)
        std::cout << "Error: too large a number. \n";
    else if (dValue < 0)
        std::cout << "Error: not a positive number. \n";
    else
        return (dValue);
    return (0);
}

bool checkLineFormat(std::string& line)
{
    if (!checkChars(line) || !pipDelimter(line) || !checkDateFormat(line) || !checkValue(line))
    {
        std::cout << "Error: bad input => " << line << '\n';
        return (false);
    }
    if (!checkYear(line) || !checkMonth(line) || !checkDay(line))
    {
        std::cout << "Error: bad input => " << line << '\n';
        return (false);
    }
    return (true);
}