#include "header.hpp"

Form::Form(std::string name, int toSigne, int toExecute) : m_name(name), m_grade_to_sign(toSigne), m_grade_to_execute(toExecute)
{
	GradeTooHighException(toSigne);
	GradeTooHighException(toExecute);
	GradeTooLowException(toSigne);
	GradeTooLowException(toExecute);
	m_signature = 0;
}

Form::Form(const Form& obj) : m_name(obj.m_name), m_grade_to_sign(obj.m_grade_to_sign), m_grade_to_execute(obj.m_grade_to_execute)
{
	m_signature = obj.m_signature;
}

Form& Form::operator=(const Form& obj)
{
	if (this != &obj)
		m_signature = obj.m_signature;
	return (*this);
}

Form::~Form()
{
}

void Form::GradeTooHighException(int grade)
{
	if (grade < 1)
		throw MyException("Grade too high");
}

void Form::GradeTooLowException(int grade)
{
	if (grade > 150)
		throw MyException("Grade too low");
}

std::string Form::getName(void) const
{
	return (m_name);
}

int Form::getGradeToSign(void) const
{
	return (m_grade_to_sign);
}

int Form::getGradeToExecute(void) const
{
	return (m_grade_to_execute);
}

int Form::getSignature(void) const
{
	if (m_signature)
		return (1);
	return (0);
}

void Form::beSigned(const Bureaucrat& hamid)
{
	if (hamid.getGrade() >= this->getGradeToSign())
		m_signature = 1;
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
    out << obj.getName() << ", Form and the grade to signe is  " << obj.getGradeToSign() << " and grade to execute " << obj.getGradeToExecute() << '\n';
    return out;
}


