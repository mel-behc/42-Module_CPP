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

void Contact::search_out(std::string str) const
{
    int i;

    i = 0;
    std::cout << " | ";
    if (str.size() > 10)
    {
        while (i < 10)
        {
            if (i != 9)
                std::cout << str[i];
            else
                std::cout << '.';
            i++;
        }
    }
    else
        std::cout << str;
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
            std::cout << index;
        search_out(m_infos[i]);
        if (i == 2)
            std::cout << std::endl;
        i++;
    }
}

void Contact::output_infos() const
{
    int i;

    i = 0;
    while (i < 5)
    {
        std::cout << m_infos[i] << std::endl;
        i++;
    }
}