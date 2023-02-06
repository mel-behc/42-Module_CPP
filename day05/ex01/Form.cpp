#include "header.hpp"

Form::Form(std::string name, int toSigne, int toExecute) : m_name(name), m_grade_to_sign(toSigne), m_grade_to_execute(toExecute)
{
	signature = 1;
}

Form::Form(const Form& obj) : m_name(obj.m_name), m_grade_to_sign(obj.m_grade_to_sign), m_grade_to_execute(obj.m_grade_to_execute)
{
	signature = obj.signature;	
}

Form& Form::operator=(const Form& obj)
{
	if (*this != obj)
		signature = obj.signature;	
	return (*this);
}

Form::~Form()
{
}