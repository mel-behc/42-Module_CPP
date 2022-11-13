#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.hpp"

class Contact
{
    private:
        std::string m_infos[5];
    public:
        Contact();
        void assigne_info(std::string info[]);
        void search_out(std::string str) const;
        void print_infos(int index) const;
        void output_infos() const;
};

#endif