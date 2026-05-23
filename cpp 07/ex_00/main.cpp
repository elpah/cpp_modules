#include "Whatever.hpp"

// int main()
// {
// 	int a, b;
// 	a = 5, b = 10;

// 	std::cout << "Before swap: A: " << a << ", " << "B: " << b << std::endl;
// 	::swap(a, b);
// 	std::cout << "After swap: A: " << a << ", " << "B: " << b << std::endl;
// 	std::cout << "min(a,b): " << ::min(a, b) << std::endl;
// 	std::cout << "max(a,b): " << ::max(a, b) << std::endl;

// 	float e, f;
// 	e = 5.5, f = 10.2;

// 	std::cout << "Before swap: E: " << e << ", " << "F: " << f << std::endl;
// 	::swap(e, f);
// 	std::cout << "After swap: E: " << e << ", " << "F: " << f << std::endl;
// 	std::cout << "min(e,f): " << ::min(e, f) << std::endl;
// 	std::cout << "max(e,f): " << ::max(e, f) << std::endl;

// 	return 0;
// }

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}
