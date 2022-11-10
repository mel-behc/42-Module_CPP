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

// void Contact::transmit_contact(std::string array1[], std::string array2[])
// {
//     int i;

//     i = 0;
//     while (i < 5)
//     {
//         array1[i] = array2[i];
//         i++;
//     }
// }

void Contact::print_infos() const
{
    int i;

    i = 0;
    while (i < 5)
    {
        if (m_infos[0].empty())
            break;
        std::cout << m_infos[i] << std::endl;
        i++;
    }
}