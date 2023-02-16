#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : MutantStack<T>::stack() {}
		
        MutantStack(MutantStack const &other): MutantStack<T>::stack(other){}
		
        MutantStack<T> &operator=(MutantStack<T> const &obj)
		{
            (void)obj;
			return *this;
		}
		
        virtual ~MutantStack() {};

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator riterator;
		typedef typename MutantStack<T>::container_type::const_iterator conterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator reconterator;

		iterator begin()
        {
            return (this->c.begin()); 
        }
		iterator end()
        {
            return (this->c.end());
        }
		conterator cbegin() const
        {
            return (this->c.cbegin());
        }
		conterator cend() const
        {
            return (this->c.cend());
        }
		riterator rbegin()
        {
            return (this->c.rbegin());
        }
		riterator rend()
        {
            return (this->c.rend());
        }
		reconterator crbegin() const
        {
            return (this->c.crbegin());
        }
		reconterator crend() const
        {
            return (this->c.crend());
        }

};

#endif