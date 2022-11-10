#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "header.hpp"

class Phonebook
{
	private:
		Contact person[2];
		void	user_output(int index) const;
		void 	clear_array(std::string array[]);
		void	fill_contact(std::string info[]);
	public:
		Phonebook();
		void	add_contact(int counter);
		void	print();
};

#endif