#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.hpp"

class Contact
{
    private:
        std::string m_infos[5];
        void search_output(std::string str) const;
    public:
        Contact();
        void assigne_info(std::string info[]);
        void print_infos(int index) const;
        void output_infos() const;
};

#endif