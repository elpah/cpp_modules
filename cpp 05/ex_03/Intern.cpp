#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "Intern copy constructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;

	std::cout << "Intern copy assignment operator called"
			  << std::endl;

	return (*this);
}

AForm *Intern::makePresidentialForm(const std::string &target)
{
	AForm *temp = new PresidentialPardonForm(target);
	return (temp);
}

AForm *Intern::makeShrubberyForm(const std::string &target)
{
	AForm *temp = new ShrubberyCreationForm(target);
	return (temp);
}
AForm *Intern::makeRobotForm(const std::string &target)
{
	AForm *temp = new RobotomyRequestForm(target);
	return (temp);
}

AForm *Intern::makeForm(const std::string &formName,
						const std::string &target)
{
	std::string forms[3] = {
		"presidential_pardon",
		"robotomy_request",
		"shrubbery_creation"};

	AForm *(Intern::*functions[3])(const std::string &target) = {
		&Intern::makePresidentialForm,
		&Intern::makeRobotForm,
		&Intern::makeShrubberyForm};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*functions[i])(target);
		}
	}
	std::cout << "Error: form does not exist" << std::endl;
	return (NULL);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}
