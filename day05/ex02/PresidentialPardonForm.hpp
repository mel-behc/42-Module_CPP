#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "header.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string			m_target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		virtual ~PresidentialPardonForm();
		virtual void execute(Bureaucrat const & executor) const;
};

#endif 