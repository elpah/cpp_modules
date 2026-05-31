#include "Span.hpp"

int main(void)
{
	std::cout << "===== Normal addNumber test =====" << std::endl;
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Iterator addNumbers test =====" << std::endl;
	try
	{
		Span sp(10);

		std::vector<int> numbers;

		numbers.push_back(1);
		numbers.push_back(5);
		numbers.push_back(7);
		numbers.push_back(4);
		numbers.push_back(19);
		numbers.push_back(35);
		numbers.push_back(20);
		numbers.push_back(24);
		numbers.push_back(44);
		numbers.push_back(90);

		sp.addNumbers(numbers.begin(), numbers.end());

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Too many numbers test =====" << std::endl;
	try
	{
		Span sp(3);

		std::vector<int> numbers;

		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);

		sp.addNumbers(numbers.begin(), numbers.end());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Not enough elements test =====" << std::endl;
	try
	{
		Span sp(5);

		sp.addNumber(42);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Large test =====" << std::endl;
	try
	{
		Span sp(10000);

		std::vector<int> big;

		for (int i = 0; i < 10000; i++)
			big.push_back(i);

		sp.addNumbers(big.begin(), big.end());

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}