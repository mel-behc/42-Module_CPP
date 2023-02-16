#include "Span.hpp"

Span::Span() : m_size(0)
{
}

Span::Span(unsigned int N) : m_size(N)
{ 
}

Span::Span(const Span& obj) 
{
    *this = obj;
}

Span& Span::operator=(const Span &obj)
{
	if (this == &obj)
		return *this;
	m_size = obj.m_size;
	m_spanVector = obj.m_spanVector;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(unsigned int number)
{
	if(m_spanVector.size() == m_size)
		throw (std::length_error("Error: No more space !!\n"));
	m_spanVector.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > static_cast<int>(m_size))
		throw std::length_error("Error: No more space\n");
	m_spanVector.insert(m_spanVector.end(), begin, end);
}

int Span::shortestSpan(void)
{
	std::vector<int>::iterator begin;
	int distance(0);
	int shSpan(2147483647);

	if (m_spanVector.size() < 2)
		throw std::length_error("Error <Short span>: Container size must be bigger than that\n");
	else
	{		
		begin = m_spanVector.begin();
		while ((begin + 1) != m_spanVector.end())
		{
			distance = *(begin) - *(begin + 1);
			if (distance < 0)
				distance *= -1;
			if (shSpan > distance)
				shSpan = distance;
			begin++;
		}
	}
	return (shSpan);
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator begin;
	int distance(0);
	int lgSpan(0);

	if (m_spanVector.size() < 2)
		throw std::length_error("Error <Long span>: Container size must be bigger than that\n");
	else
	{	
		begin = m_spanVector.begin();
		while ((begin + 1) != m_spanVector.end())
		{
			distance = *(begin) - *(begin + 1);
			if (distance < 0)
				distance *= -1;
			if (lgSpan < distance)
				lgSpan = distance;
			begin++;
		}
	}
	return (lgSpan);
}