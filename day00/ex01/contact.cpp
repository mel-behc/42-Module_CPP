#include "header.hpp"

Contact::Contact()
{
}

void Contact::assigne_info(std::string info[])
{
    int i;

    i = 0;
    while (i < 5)
    {
        m_infos[i] = info[i];
        i++;
    }
}

void Contact::search_output(std::string str) const
{
    int length;

    length = 0;
    if (str.length() < 10)
        length = 11 - str.length();
    if (str.length() > 9)
        std::cout << str.substr(0, 9) + "." << ' ';
    else
        std::cout << str << std::setfill (' ') << std::setw(length + 2);
}

void Contact::print_infos(int index) const
{
    int i;

    i = 0;
    while (i < 3)
    {
        if (m_infos[i].empty())
            break;
        if (i == 0)
            std::cout << index + 1 << ' ';
        std::cout << "| ";
        search_output(m_infos[i]);
        if (i == 2)
            std::cout << '\n';
        i++;
    }
}

void Contact::output_infos() const
{
    int i;

    i = 0;
    while (i < 5)
    {
        if (m_infos[i].empty())
            break;
        std::cout << m_infos[i] << '\n';
        i++;
    }
}