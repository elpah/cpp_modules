#include "Bureaucrat.hpp"
#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too Low";
}

Form::Form() : _name(""), _gradeToSign(1), _gradeToExecute(1), _isSigned(false)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name),
																		   _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();

	std::cout << "Form  constructor called with params." << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign),
								_gradeToExecute(other._gradeToExecute), _isSigned(other._isSigned)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{

	if (this != &other)
	{
		_isSigned = other._isSigned;
	}
	std::cout << "Form copy assignment operator called" << std::endl;

	return *this;
}

bool Form::getIsSigned(void) const
{
	return _isSigned;
}

const std::string &Form::getName(void) const
{
	return _name;
}

int Form::getGradeToSign(void) const
{
	return _gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &input)
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