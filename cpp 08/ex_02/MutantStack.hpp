#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <deque>
#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();

	typedef typename Container::iterator iterator;
	iterator end();
	iterator begin();
};

#endif
