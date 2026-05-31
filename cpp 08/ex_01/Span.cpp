#include "Span.hpp"
Span::Span() : _max_element(0)
{
	std::cout << "Span defualt constructor called" << std::endl;
}
Span::Span(int N) : _max_element(N)
{
	std::cout << "Span constructor called with params" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span &other) : _max_element(other._max_element), _storage(other._storage)
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_max_element = other._max_element;
		_storage = other._storage;
	}
	return (*this);
}

void Span::addNumber(int to_add)
{
	if (_storage.size() < _max_element)
		_storage.push_back(to_add);
	else
		throw std::out_of_range("Storage is already full");
}

int Span::shortestSpan()
{
	if (_storage.size() < 2)
		throw std::runtime_error("Not enough elements");
	std::vector<int> temp(_storage);
	std::sort(temp.begin(), temp.end());
	int shortest = std::abs(temp[1] - temp[0]);
	for (std::vector<int>::size_type i = 1; i < temp.size() - 1; ++i)
	{
		int difference = std::abs(temp[i + 1] - temp[i]);
		if (difference < shortest)
			shortest = difference;
	}
	return shortest;
}

int Span::longestSpan()
{
	int length = _storage.size();
	if (length < 2)
		throw std::runtime_error("Not enough elements");
	std::vector<int> temp(_storage);
	std::sort(temp.begin(), temp.end());
	int longest = (temp[length - 1] - temp[0]);
	return longest;
}