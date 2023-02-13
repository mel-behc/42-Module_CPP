#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
    *this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
    (void)obj;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

bool ScalarConverter::isInt(std::string param)
{
    for (size_t i(0); i < param.length(); i++)
    {
        if ((param[i] < 48  || param[i] > 57))
            return (false);
    }
    return (true);
}

bool ScalarConverter::isFloat(std::string param)
{
    int counter(0);

    for (size_t i(0); i < (param.length() - 1); i++)
    {
        if ((param[i] < 47 || param[i] > 58))
        {
            if (param[i] == '.')
                counter++;
            else
                return (false);
        }
    }
    if (param[param.length() - 1] != 'f')
        return (false);
    if (counter > 1)
        return (false);
    return (true);
}

bool ScalarConverter::isDouble(std::string param)
{
    int counter(0);

    for (size_t i(0); i < param.length(); i++)
    {
        if ((param[i] < 47 || param[i] > 58))
        {
            if (param[i] == '.')
                counter++;
            else
                return (false);
        }
    }
    if (counter > 1 || counter == 0)
        return (false);
    return (true);
}

void ScalarConverter::specialCases(std::string cases)
{
    std::cout << "char: " << "impossible" << '\n';
    std::cout << "int: " << "impossible" << '\n';
    std::cout << "float: " << cases << "\n";
    std::cout << "double: " << cases << "\n";
}

void ScalarConverter::convertInt(std::string arg)
{
    m_sstream << arg;
    m_sstream >> m_int;
    std::cout << "char: " << static_cast<char>(m_int) << '\n';
    std::cout << "int: " << (m_int) << '\n';
    std::cout << "float: " << static_cast<float>(m_int) << ".0f\n";
    std::cout << "double: " << static_cast<double>(m_int) << ".0\n";
}

void ScalarConverter::convertFloat(std::string arg)
{
    m_arg = arg.substr(0, (arg.length() - 1));
    m_sstream << m_arg;
    m_sstream >> m_float;
    std::cout << "char: " << static_cast<char>(m_float) << '\n';
    std::cout << "int: " << static_cast<int>(m_float) << '\n';
    std::cout << "float: " << m_float << "f\n";
    std::cout << "double: " << static_cast<double>(m_float) << "\n";
}

void ScalarConverter::convertDouble(std::string arg)
{
    m_sstream << arg;
    m_sstream >> m_double;
    std::cout << "char: " << static_cast<char>(m_double) << '\n';
    std::cout << "int: " << static_cast<int>(m_double) << '\n';
    std::cout << "float: " << static_cast<float>(m_double) << "f\n";
    std::cout << "double: " << m_double << "\n";
}

void ScalarConverter::convertChar(char ch)
{
    if (ch >= 33 && ch <= 126)
        std::cout << "char: " << (ch) << '\n';
    else
        std::cout << "char: Non displayable" << '\n';
        std::cout << "int: " << static_cast<int>(ch) << '\n';
        std::cout << "float: " << static_cast<float>(ch) << ".0f\n";
        std::cout << "double: " << static_cast<double>(ch) << ".0\n";
}

void ScalarConverter::convert(std::string param)
{
    size_t length;

    length = param.length();
    if (param == "nan" || param == "nanf" || param == "+inf" || param == "-inf" || param == "+inff" || param == "-inff")
    {
        specialCases(param);
        return ;
    }
    if (length == 1)
        convertChar(param[0]);
    else if (isInt(param))
        convertInt(param);
    else if (isFloat(param))
        convertFloat(param);
    else if (isDouble(param))
        convertDouble(param);
}