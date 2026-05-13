#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat Elpah("Elpah", 49);
		Form form1("Tax Form", 140, 100);
		Form form2("Secret Form", 50, 25);

		std::cout << Elpah << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

		Elpah.signForm(form1);
		Elpah.signForm(form2);

		Elpah.incrementGrade();

		std::cout << Elpah << std::endl;

		Elpah.signForm(form1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}