#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	std::srand(std::time(NULL));
	int number = rand() % 3;

	if (number == 0)
	{
		std::cout << "generated type A" << std::endl;
		return new A();
	}
	else if (number == 1)
	{
		std::cout << "generated type B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "generated type C" << std::endl;
		return new C();
	}
}
