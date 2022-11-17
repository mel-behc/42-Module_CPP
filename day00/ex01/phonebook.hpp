#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "header.hpp"

class Phonebook
{
	private:
		Contact person[8];
		void	user_output(int index) const;
		void 	clear_array(std::string array[]);
		void	fill_contact(std::string info[]);
		bool	check_prompt(std::string str);
	public:
		Phonebook();
		void	add_contact(int counter);
		void 	search_contact();
		void	print();
};

#endif