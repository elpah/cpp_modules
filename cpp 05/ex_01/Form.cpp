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
