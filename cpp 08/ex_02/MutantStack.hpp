#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <deque>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator end();
	iterator begin();
};

#endif
