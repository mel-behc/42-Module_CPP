#ifndef FORM_HPP
#define FORM_HPP

#include "header.hpp"

class Bureaucrat;

class Form
{

	private:
		const std::string	m_name;
		const int			m_grade_to_sign;
		const int			m_grade_to_execute;
		bool				m_signature;
	public:
		Form(std::string name, int toSigne, int toExecute);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();
		void GradeTooHighException(int grade);
		void GradeTooLowException(int grade);
		std::string getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		int getSignature(void) const;
		void beSigned(const Bureaucrat& hamid);
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif