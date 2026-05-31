#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <stdexcept>

class Span
{
private:
	std::vector<int> _storage;
	unsigned int _max_element;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	void addNumber(int to_add);
	int shortestSpan();
	int longestSpan();
	template <typename Iterator>
	void addNumbers(Iterator begin, Iterator end);

	~Span();
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
	if (_storage.size() + std::distance(begin, end) > _max_element)
		throw std::out_of_range("Storage is already full");

	_storage.insert(_storage.end(), begin, end);
}
#endif