
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern randomIntern;

		AForm *shrub = randomIntern.makeForm(
			"shrubbery_creation",
			"home");

		AForm *robot = randomIntern.makeForm(
			"robotomy_request",
			"Bender");

		AForm *pardon = randomIntern.makeForm(
			"presidential_pardon",
			"Arthur Dent");

		AForm *wrong = randomIntern.makeForm(
			"dont_exist_form",
			"target");
		Bureaucrat boss("Boss", 1);
		boss.signForm(*shrub);
		boss.executeForm(*shrub);
		boss.signForm(*robot);
		boss.executeForm(*robot);
		boss.signForm(*pardon);
		boss.executeForm(*pardon);

		delete shrub;
		delete robot;
		delete pardon;
		delete wrong;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}