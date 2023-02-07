#ifndef AFORM_HPP
#define AFORM_HPP

#include "header.hpp"

class Bureaucrat;

class AForm
{

	private:
		const std::string	m_name;
		const int			m_grade_to_sign;
		const int			m_grade_to_execute;
		bool				m_signature;
	public:
		AForm();
		AForm(std::string name, int toSigne, int toExecute);
		AForm(const AForm& obj);
		AForm& operator=(const AForm& obj);
		virtual ~AForm();
		void GradeTooHighException(int grade) const;
		void GradeTooLowException(int grade, int max = 150) const;
		std::string getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		void beSigned(const Bureaucrat& hamid);
		int getSignature(void) const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		void FormNotSigned(int signature) const;
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif