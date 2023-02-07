#include "header.hpp"

AForm::AForm() : m_name("name"), m_grade_to_sign(1), m_grade_to_execute(1), m_signature(0)
{
}

AForm::AForm(std::string name, int toSigne, int toExecute) : m_name(name), m_grade_to_sign(toSigne), m_grade_to_execute(toExecute)
{
	GradeTooHighException(toSigne);
	GradeTooHighException(toExecute);
	GradeTooLowException(toSigne);
	GradeTooLowException(toExecute);
	m_signature = 0;
}

AForm::AForm(const AForm& obj) : m_name(obj.m_name), m_grade_to_sign(obj.m_grade_to_sign), m_grade_to_execute(obj.m_grade_to_execute)
{
	m_signature = obj.m_signature;
}

AForm& AForm::operator=(const AForm& obj)
{
	if (this != &obj)
		m_signature = obj.m_signature;
	return (*this);
}

AForm::~AForm()
{
}

void AForm::GradeTooHighException(int grade) const
{
	if (grade < 1)
		throw MyException("Grade too high");
}

void AForm::FormNotSigned(int signature) const
{
	if (signature != 1)
		throw MyException("exeption : Form Not Signed");
}

void AForm::GradeTooLowException(int grade , int max) const
{
	if (grade > max)
		throw MyException("Grade too low");
}

std::string AForm::getName(void) const
{
	return (m_name);
}

int AForm::getGradeToSign(void) const
{
	return (m_grade_to_sign);
}

int AForm::getGradeToExecute(void) const
{
	return (m_grade_to_execute);
}

void AForm::beSigned(const Bureaucrat& hamid)
{
	if (hamid.getGrade() <= this->getGradeToSign())
		m_signature = 1;
}

int AForm::getSignature(void) const
{
	if (m_signature == 1)
		return (1);
	return (0);
}


std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
    out << obj.getName() << ", Form and the grade to signe is  " << obj.getGradeToSign() << " and grade to execute " << obj.getGradeToExecute() << '\n';
    return out;
}


