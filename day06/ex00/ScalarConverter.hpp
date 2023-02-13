#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScalarConverter
{
    private:
        int                 m_int;
        float               m_float;
        double              m_double;
        std::stringstream   m_sstream;
        std::string         m_arg;
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);
        ~ScalarConverter();
        void convert(std::string param);
        bool isInt(std::string param);
        bool isFloat(std::string param);
        bool isDouble(std::string param);
        void specialCases(std::string cases);
        void convertInt(std::string arg);
        void convertFloat(std::string arg);
        void convertDouble(std::string arg);
        void convertChar(char ch);

};

#endif