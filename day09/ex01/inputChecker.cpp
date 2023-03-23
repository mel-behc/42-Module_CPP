#include "RPN.hpp"

static bool spliter(std::string& input)
{
    for (size_t i = 0; i < (input.size() - 1); ++i)
    {
        if (input[i] == '-' || input[i] == '/' || input[i] == '*' || input[i] == '+')
        {
            if (input[i - 1] != ' ' || input[i + 1] != ' ')
                return (false);
        }
    }
    return (true);
}

bool inputChecker(std::string& input)
{
    size_t length;
    size_t tmp;

    length = 0;
    tmp = input.size();
    if (isdigit(input[0]) == 0 || (input[tmp - 1] != '-' && input[tmp - 1] != '/' && input[tmp - 1] != '*' && input[tmp - 1] != '+'))
        length = 0;
    else
    {
        for (size_t i = 0; i < input.size(); ++i)
        {
            if (isdigit(input[i]) == 1 || input[i] == '-' || input[i] == '/' || input[i] == '*' || input[i] == '+' || input[i] == ' ')
                length++;
            else
                length = 0;
        }
    }
    if (length == input.size() && spliter(input) && isdigit(input[2]))
        return (true);
    return (false);
}