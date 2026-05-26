#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> _storage;
	int _max_element;

public:
	Span();
	Span(int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	void addNumber(int to_add);
	int shortestSpan();
	int longestSpan();
	~Span();
};

#endif