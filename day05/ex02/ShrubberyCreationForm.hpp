#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "header.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string m_target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		virtual ~ShrubberyCreationForm();
		virtual void execute(Bureaucrat const & executor) const;
};

#endif