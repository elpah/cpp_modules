
#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);

	AForm *makeForm(const std::string &formName,
					const std::string &target);

	AForm *makePresidentialForm(const std::string &target);
	AForm *makeRobotForm(const std::string &target);
	AForm *makeShrubberyForm(const std::string &target);

	~Intern();
};

#endif