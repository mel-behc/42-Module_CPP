#include <iostream>
#include <stdexcept>

template <typename T>
class Array 
{
    private:
        T               *m_array;
        unsigned int    m_size;
    public:
        
        Array()
        {
            m_size = 0;
            m_array = NULL;
        }

        Array(unsigned int n)
        {
            m_size = n;
            m_array = new T[n];
        }
        
        Array(const Array<T> &obj)
        {
            *this = obj;
        }

        Array<T> & operator=(const Array<T> & obj)
        {
            if (this->m_array)
                delete [] this->m_array;
            this->m_size = obj.m_size;
            this->m_array = new T[this->m_size];
            for(unsigned int i(0); i < this->m_size; i++)
                this->array[i] = obj.array[i];
            return (*this);
        }

        unsigned int size() const
        {
            return (m_size);
        }

        T& operator[](unsigned int n) const
        {
            if (n >= m_size)
                throw std::out_of_range("Out of Range error");
            return (m_array[n]);
        }

        ~Array()
        {
            delete [] m_array;
        }
};
