#include "RPN.hpp"

static bool numberChcekr(int number)
{
    if (number < 0 || number > 10)
        return (false);
    return (true);
}

static int makeOperation(std::stack<int>& stack, char operand)
{
    int result;
    int tmp1;
    int tmp2;

    result = 0;
    tmp1 = stack.top();
    stack.pop();
    tmp2 = stack.top();
    stack.pop();
    if (operand == '+')
        result = tmp2 + tmp1;
    else if (operand == '-')
        result = tmp2 - tmp1;
    else if (operand == '*')
        result = tmp2 * tmp1;
    else if (operand == '/')
        result = tmp2 / tmp1;
    stack.push(result);
    return (result);
}

void printResult(std::string& input)
{
    std::stack<int> myStack;
    std::string digit;
    int result;
    int i;

    result = 0;
    i = 0;
    while (input[i])
    {
        if (isdigit(input[i]))
        {
            digit = input.substr(i, 1);
            std::stringstream value(digit);
            value >> result;
            if (!numberChcekr(result))
                return ;
            if (myStack.size() <= 2)
                myStack.push(result);
        }
        else if (input[i] == '-' || input[i] == '/' || input[i] == '*' || input[i] == '+')
            result = makeOperation(myStack, input[i]);
        i++;
    }
    std::cout << result << '\n';   
}