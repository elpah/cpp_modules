#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

Bureaucrat::Bureaucrat() : _name(""), _grade(1)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name), _grade(1)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();

	_grade = grade;

	std::cout << "Bureaucrat constructor called with params." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{

	if (this != &other)
	{
		_grade = other._grade;
	}
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;

	return *this;
}

const std::string &Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade -= 1;
}
void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade += 1;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input)
{
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << ".";
	return (out);
}