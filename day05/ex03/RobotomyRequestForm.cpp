#include "header.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 25, 5), m_target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
		this->m_target = obj.m_target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	FormNotSigned(getSignature());
	GradeTooLowException(executor.getGrade(), getGradeToExecute());
	std::cout << "YOHOHOHOHOHOHOH \n";
    srand(time(NULL));
    if (rand() % 2 == 0)   
        std::cout << getName() << " Robotomized done (Y) \n";
    else
        std::cout << getName() << " Robotomized Failed ^@^ \n";
}