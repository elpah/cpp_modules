
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		std::srand(std::time(0));
		Bureaucrat boss("Boss", 1);
		Bureaucrat manager("ceo", 10);
		Bureaucrat employee("employee", 150);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Arthur Dent");
		boss.signForm(shrub);
		boss.executeForm(shrub);
		boss.signForm(robot);
		boss.signForm(pardon);

		manager.executeForm(shrub);
		manager.executeForm(robot);
		manager.executeForm(pardon);
		employee.executeForm(shrub);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}