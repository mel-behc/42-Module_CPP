#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "header.hpp"
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string	m_name;
		int					m_grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();
		void increaseGrade(void);
		void decreaseGrade(void);
		std::string getName(void) const;
		int getGrade(void) const;
		void GradeTooHighException(int grade);
		void GradeTooLowException(int grade);
		void signForm(const AForm& form) const;
		void executeForm(AForm const & obj) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
