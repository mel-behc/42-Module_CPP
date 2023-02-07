#include "header.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 72), m_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
		this->m_target = obj.m_target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	FormNotSigned(getSignature());
	GradeTooLowException(executor.getGrade(), getGradeToExecute());
	std::cout << "hamiiid\n";
	std::ofstream ouStream(executor.getName() + "_shrubbery");
	if (ouStream)
		ouStream << "bigg tree \n";
	else
		std::cerr << "nothing to stream \n";
}