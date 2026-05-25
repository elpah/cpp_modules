#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _length(0)
{
	std::cout << "Array Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _length(n)
{
	_array = new T[n]();
	std::cout << "Array Constructor called with params" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : _length(other._length)
{
	std::cout << "Array Copy constructor called" << std::endl;
	_array = new T[_length];
	for (unsigned int i = 0; i < _length; i++)
	{
		_array[i] = other._array[i];
	}
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		if (_array)
			delete[] _array;
		_length = other._length;
		_array = new T[_length];
		for (size_t i = 0; i < _length; i++)
		{
			_array[i] = other._array[i];
		}
	}
	return *this;
}
template <typename T>
size_t Array<T>::size(void) const
{
	return (_length);
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
	if (!_array || (index >= _length))
		throw std::out_of_range("Out Of Range");
	return _array[index];
}

template <typename T>
const T &Array<T>::operator[](size_t index) const
{

	if (!_array || (index >= _length))
		throw std::out_of_range("Out Of Range");
	return _array[index];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}
