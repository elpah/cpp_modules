#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called with params" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}

	std::cout << "ShrubberyCreationForm copy assignment operator called"
			  << std::endl;

	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

void ShrubberyCreationForm::executeAction(void) const
{
	const std::string filename = getTarget() + "_shrubbery";
	std::ofstream out(filename.c_str());
	if (!out.is_open())
		return;
	out << "   /\\" << std::endl;
	out << "  /  \\" << std::endl;
	out << " /++++\\" << std::endl;
	out << "/  ()  \\" << std::endl;
	out << "  ||||" << std::endl;
	out << "  ||||" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
