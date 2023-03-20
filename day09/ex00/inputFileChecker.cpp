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

static bool checkDateFormat(std::string& line)
{
    size_t pos;

    if (line[4] != '-')
        return (false);
    pos = 4;
    while (line[++pos])
    {
        if (line[pos] == '-')
            break ;
    }
    if (pos == line.size())
        return (false);
    return (true);
}

static bool checkYear(std::string& line)
{
    std::string year;
    int value;

    year = line.substr(0, 4);
    std::stringstream yr(year);
    yr >> value;
    if (value >= MIN_YEAR && value <= MAX_YEAR)
        return (true);
    return (false);
}

static bool checkMonth(std::string& line)
{
    std::string month;
    int value;

    if (line[5] == '0' || line[5] == '1')
        month = line.substr(5, 2);
    else
        month = line.substr(5, 1);
    std::stringstream mn(month);
    mn >> value;
    if (value >= MIN_MONTH && value <= MAX_MONTH)
        return (true);
    return (false);
}

static bool checkDay(std::string& line)
{
    std::string day;
    int value;
    size_t pos;

    pos = 0;
    while (line[pos])
    {
        if (line[pos] == '|')
            break;
        pos++;
    }
    if (pos == line.size())
        return (false);
    while (line[pos] != '-')
        pos--;
    pos++;
    if (line[pos] == '0' || line[pos] == '1')
        day = line.substr(pos, 2);
    else
        day = line.substr(pos, 1);
    std::stringstream dy(day);
    dy >> value;
    if (value >= MIN_DAY && value <= MAX_DAY)
        return (true);
    return (false);
}

static void checkValue(std::string& line)
{
    std::string btc;
    size_t i;
    int rValue = 0;
    float dValue = 0;
    int pos;

    pos = 0;
    while (line[pos] != '|')
        pos++;
    pos++;
    btc = line.substr(pos, (line.size()));
    std::stringstream vl(btc);
    for (i = 0; i < btc.size(); ++i)
    {
        if (btc[i] == '.' )
            break;
    }
    if (i != btc.size())
    {
        vl >> dValue;
        std::cout << dValue << '\n';
        if (dValue > 1000)
            std::cout << "Error: too large a number. \n";
        else if (dValue < 0)
            std::cout << "Error: not a positive number. \n";
    }
    else
    {
        vl >> rValue;
        std::cout << rValue << '\n';
        if (rValue > 1000)
            std::cout << "Error: too large a number. \n";
        else if (rValue < 0)
            std::cout << "Error: not a positive number. \n";
    }
}

void checkLineFormat(std::string& line)
{
    if (!checkChars(line))
    {
        std::cout << "Error: bad input !\n";
        return ;
    }    
    for (size_t i = 0; i < line.size(); ++i)
    {
        if (line[i] == '|')
            break;
        if (i == (line.size()))
        {
            std::cout << "Error: bad input !\n";
            return ;
        }
    }
    if (!checkYear(line) || !checkDateFormat(line) || !checkMonth(line) || !checkDay(line))
    {
        std::cout << "Error: bad input !\n";
        return ;
    }
    checkValue(line);
}