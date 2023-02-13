#include <iostream>
#include <stdexcept>

template <typename T>
class Array 
{
    private:
        T *array;
        unsigned int _size;
    public:
        Array()
        {
            std::cout << "Default Constructor\n";
            this->_size = 0;
            this->array = NULL;
        }

        Array(unsigned int n)
        {
            std::cout << "Default Constructor\n";
            this->_size = n;
            this->array = new T[n];
        }

        Array(const Array<T> &obj)
        {
            std::cout << "Copy Constructor\n";
            this->_size = obj._size;
            this->array = new T[_size];
            unsigned int i = 0;
            while (i < _size)
            {
                this->array[i] = obj.array[i];
                i++;
            }
        }

        Array<T> & operator=(const Array<T> & obj)
        {
            std::cout << "Copy assignment operator\n";
            if (this->array)
                delete [] this->array;
            this->_size = obj._size;
            this->array = new T[_size];
            unsigned int i = 0;
            while (i < _size)
            {
                this->array[i] = obj.array[i];
                i++;
            }
            return *this;
        }

        unsigned int size() const
        {
            return this->_size;
        }

        T& operator[](unsigned int n)
        {
            if (n >= this->_size) throw std::out_of_range("Out of Range error");
            return this->array[n];
        }

        T& operator[](unsigned int n) const
        {
            if (n >= this->_size) throw std::out_of_range("Out of Range error");
            return this->array[n];
        }

        ~Array()
        {
            std::cout << "Destructor\n";
            delete [] this->array;
        }
};
