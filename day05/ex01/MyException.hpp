#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include "header.hpp"

class MyException : public std::exception
{
	private:
		std::string m_msg_error;
	public:
		MyException(std::string msg);
		virtual const char* what() const throw();
		virtual ~MyException() throw();
};

#endif