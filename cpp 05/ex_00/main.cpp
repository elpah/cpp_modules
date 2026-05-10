#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("TooHigh", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("TooLow", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
