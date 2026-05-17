#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "grade too Low";
}

const char *AForm::NotSignedException::what() const throw()
{
	return "Form not signed";
}

AForm::AForm() : _name(""), _gradeToSign(1), _gradeToExecute(1), _isSigned(false)
{
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name),
																			 _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();

	std::cout << "AForm  constructor called with params." << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign),
								   _gradeToExecute(other._gradeToExecute), _isSigned(other._isSigned)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{

	if (this != &other)
	{
		_isSigned = other._isSigned;
	}
	std::cout << "AForm copy assignment operator called" << std::endl;

	return *this;
}

bool AForm::getIsSigned(void) const
{
	return _isSigned;
}

const std::string &AForm::getName(void) const
{
	return _name;
}

int AForm::getGradeToSign(void) const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute(void) const
{
	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw NotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
	executeAction();
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const AForm &input)
{
	out << std::boolalpha;
	out << input.getName()
		<< ", is signed: "
		<< input.getIsSigned()
		<< ", grade to sign: "
		<< input.getGradeToSign()
		<< ", grade to execute: "
		<< input.getGradeToExecute()
		<< ".";
	return (out);
}