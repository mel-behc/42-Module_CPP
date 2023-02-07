#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "header.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string m_target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		virtual ~RobotomyRequestForm();
		virtual void execute(Bureaucrat const & executor) const;
};

#endif