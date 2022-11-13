#include "header.hpp"

Phonebook::Phonebook()
{
}

void Phonebook::user_output(int index) const
{
    if (index == 0)
        std::cout << "First name => ";
    else if (index == 1)
        std::cout << "Last name => ";
    else if (index == 2)
        std::cout << "Nickname => ";
    else if (index == 3)
        std::cout << "Phone number => ";
    else if (index == 4)
        std::cout << "Darkest secret => ";
}

void Phonebook::clear_array(std::string array[])
{
    int i;

    i = 0;
    while (i < 5)
    {
        array[i].clear();
        i++;
    }
}

void Phonebook::fill_contact(std::string infos[])
{
    std::string prompt;
    int i;

    i = 0;
    while (i < 5)
    {
        user_output(i);
        getline(std::cin, prompt);
        if (!prompt.empty())
            infos[i] = prompt;
        else
        {
            clear_array(infos);
            break;
        }
        i++;
    }
}

void Phonebook::add_contact(int counter)
{    
    std::string infos[5];
    static int i;
    int j;

    if (counter == 0)
        i = 0;
    if (i < 2) // befor the array getting full
    {
        fill_contact(infos);
        if (infos[0].size() != 0) // verify if the array contains infos
            person[i].assigne_info(infos);
        else // return to the old position in the array
            i--;
        i++;
    }
    else // replace old contact with the new one
    {
        j = 0;
        while (j < (i - 1))
        {
            person[j] = person[j + 1];
            j++;
        }
        fill_contact(infos);
        if (infos[0].size() != 0)
            person[j].assigne_info(infos);
    }
    std::cout << i << std::endl;
}

bool Phonebook::check_prompt(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 47 || str[i] > 58)
            return false;
        i++;
    }
    return true;
}

void Phonebook::search_contact()
{
    std::string prompt;
    int index;
    int i;

    i = 0;
    std::cout << "enter an index baliz: ";
    getline(std::cin, prompt);
    if (check_prompt(prompt))
    {
        std::stringstream(prompt) >> index;
        if (index < 0 || index > 3)
            std::cout << "out of range" << std::endl;
        else
        {
            while (i < 2)
            {
                if (index == i)
                {
                    person[i].output_infos();
                    break;
                }
                i++;
            }
        }
    }
    else
        std::cout << "enter digits baliz" << std::endl;
}

void Phonebook::print()
{
    int i;

    i = 0;
    while (i < 2)
    {
        person[i].print_infos(i);
        i++;
    }
}