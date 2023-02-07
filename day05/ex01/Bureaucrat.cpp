#include "header.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	GradeTooHighException(grade);
	GradeTooLowException(grade);
	m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	this->m_grade = obj.m_grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::GradeTooHighException(int grade)
{
	if (grade < 1)
		throw MyException("Grade too high");
}

void Bureaucrat::GradeTooLowException(int grade)
{
	if (grade > 150)
		throw MyException("Grade too low");
}

void Bureaucrat::increaseGrade(void)
{
	GradeTooHighException(m_grade - 1);
	m_grade--;
}

void Bureaucrat::decreaseGrade(void)
{
	GradeTooLowException(m_grade + 1);
	m_grade++;
}

std::string Bureaucrat::getName(void) const
{
	return (m_name);
}

int Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

void Bureaucrat::signForm(const Form& form) const
{
	if (form.getSignature() == 1)
		std::cout << this->getName() << " signed " << form.getName() << '\n';
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '\n';
    return out;
}
