#include "header.hpp"

MyException::MyException(std::string msg)
{
	m_msg_error = msg;
}

const char* MyException::what() const throw()
{
	return (m_msg_error.c_str());
}

MyException::~MyException() throw()
{
}
