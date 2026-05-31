#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}
