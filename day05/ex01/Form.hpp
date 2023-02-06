#ifndef FORM_HPP
#define FORM_HPP

#include "header.hpp"

class Form
{

	private:
		const std::string	m_name;
		const int			m_grade_to_sign;
		const int			m_grade_to_execute;
		bool				signature;
	public:
		Form(std::string name, int toSigne, int toExecute);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();
};

#endif