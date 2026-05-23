#include "Base.hpp"

Base::~Base() {}
Base::Base() {}

Base *generate(void)
{
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

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "type: A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "type: B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "type: C" << std::endl;
	return;
}

void identify(Base &p)
{
	try
	{
		((void)dynamic_cast<A &>(p));
		std::cout << "type ref: A" << std::endl;
		return;
	}
	catch (const std::exception &)
	{
	}

	try
	{
		((void)dynamic_cast<B &>(p));
		std::cout << "type ref: B" << std::endl;
		return;
	}
	catch (const std::exception &)
	{
	}
	try
	{
		((void)dynamic_cast<C &>(p));
		std::cout << "type ref: C" << std::endl;
		return;
	}
	catch (const std::exception &)
	{
	}
}
