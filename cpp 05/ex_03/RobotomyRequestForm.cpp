#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called with params" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}

	std::cout << "RobotomyRequestForm copy assignment operator called"
			  << std::endl;

	return (*this);
}

const std::string &RobotomyRequestForm::getTarget(void) const
{
	return _target;
}

void RobotomyRequestForm::executeAction() const
{
	std::cout << "* drilling noises *" << std::endl;

	if (std::rand() % 2)
		std::cout << getTarget()
				  << " has been robotomized successfully"
				  << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}