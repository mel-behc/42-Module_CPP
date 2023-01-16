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
		int		isDigit(int c);
		int		checkPhoneNumber(std::string number);
		bool	check_prompt(std::string str);
	public:
		void	add_contact(int counter);
		void 	search_contact();
		void	print();
};

#endif