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
        void print_infos() const;
};

#endif