

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _isSigned;

public:
	Form();
	Form(const std::string &name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &other);
	bool getIsSigned(void) const;
	const std::string &getName(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;
	void beSigned(const Bureaucrat &bureaucrat);
	~Form();
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Form &input);

#endif