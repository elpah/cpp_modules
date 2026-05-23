
#include "Base.hpp"
int main()
{
	std::srand(std::time(NULL));

	A a;
	identify(a);
	identify(&a);
	Base *test = generate();
	identify(test);
	identify(*test);

	delete test;
}