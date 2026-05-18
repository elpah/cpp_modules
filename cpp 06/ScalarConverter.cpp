#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool checkIsPseudoLiteral(const std::string &input)
{
	if (input == "-inf" || input == "+inf" || input == "nan" || input == "-inff" || input == "+inff" || input == "nanf")
		return (true);
	return (false);
}

bool checkInput(const std::string &input)
{

	size_t i = 0;
	bool isDecimal = false;
	bool hasDigit = false;

	if (checkIsPseudoLiteral(input))
		return (true);
	if (input.empty())
		return false;
	if (input[i] == '-')
		i++;
	for (i; i < input.size(); i++)
	{
		if (isdigit(input[i]))
			hasDigit = true;
		else if (input[i] == '.' && !isDecimal)
			isDecimal = true;
		else if (input[i] == 'f' && i == input.size() - 1)
			continue;
		else
			return (false);
	}
	return (hasDigit);
}

bool CheckIsInt(const std::string &input)
{
	if (checkIsPseudoLiteral(input))
		return (false);
	if (atof(input.c_str()) - atoi(input.c_str()) != 0)
		return (false);
	return (true);
}

void PrintInt(const std::string &input)
{
	if (checkIsPseudoLiteral(input))
	{
		std::cout << "int: impossible." << std::endl;
		return;
	}
	std::cout << "int: " << atoll(input.c_str()) << std::endl;
}

void PrintDouble(const std::string &input)
{
	if (input == "-inf" || input == "-inff")
		std::cout << "double: -inf" << std::endl;
	else if (input == "+inf" || input == "+inff")
		std::cout << "double: +inf" << std::endl;
	else if (input == "nan" || input == "nanf")
		std::cout << "double: nan" << std::endl;
	else
		std::cout << "double: "
				  << std::fixed
				  << std::setprecision(1)
				  << atof(input.c_str())
				  << std::endl;
}