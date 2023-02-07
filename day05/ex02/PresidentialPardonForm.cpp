#include "header.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President", 72, 45), m_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
{
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
		this->m_target = obj.m_target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	FormNotSigned(getSignature());
	GradeTooLowException(executor.getGrade(), getGradeToExecute());
	std::cout << getName() << " pardoned by Zaphod Beeblebrox (Y) \n";
}