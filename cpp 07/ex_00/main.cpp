#include "Whatever.hpp"

int main()
{
	int a, b;
	a = 5, b = 10;

	std::cout << "Before swap: A: " << a << ", " << "B: " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: A: " << a << ", " << "B: " << b << std::endl;
	std::cout << "min(a,b): " << ::min(a, b) << std::endl;
	std::cout << "max(a,b): " << ::max(a, b) << std::endl;

	float e, f;
	e = 5.5, f = 10.2;

	std::cout << "Before swap: E: " << e << ", " << "F: " << f << std::endl;
	::swap(e, f);
	std::cout << "After swap: E: " << e << ", " << "F: " << f << std::endl;
	std::cout << "min(e,f): " << ::min(e, f) << std::endl;
	std::cout << "max(e,f): " << ::max(e, f) << std::endl;
}