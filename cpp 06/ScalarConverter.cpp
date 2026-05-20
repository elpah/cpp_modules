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

	if (checkIsPseudoLiteral(input) || (input.length() == 1 && !isdigit(input[0])))
		return (true);
	if (input.empty())
		return false;
	if (input[i] == '-')
		i++;
	for (; i < input.size(); i++)
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
		std::cout << "int: impossible" << std::endl;
		return;
	}

	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "int: "
				  << static_cast<int>(input[0])
				  << std::endl;
		return;
	}
	std::cout << "int: "
			  << atoll(input.c_str())
			  << std::endl;
}

void PrintDouble(const std::string &input)
{
	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "double: "
				  << std::fixed
				  << std::setprecision(1)
				  << static_cast<double>(input[0])
				  << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
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

void PrintFloat(const std::string &input)
{
	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "float: "
				  << std::fixed
				  << std::setprecision(1)
				  << static_cast<float>(input[0])
				  << "f"
				  << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
		std::cout << "float: -inff" << std::endl;
	else if (input == "+inf" || input == "+inff")
		std::cout << "float: +inff" << std::endl;
	else if (input == "nan" || input == "nanf")
		std::cout << "float: nanf" << std::endl;
	else
		std::cout << "float: "
				  << std::fixed
				  << std::setprecision(1)
				  << static_cast<float>(atof(input.c_str()))
				  << "f" << std::endl;
}

void PrintChar(const std::string &input)
{
	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "char:'"
				  << input[0] << "'"
				  << std::endl;
	}
	else if (CheckIsInt(input) && atoi(input.c_str()) > 31 && atoi(input.c_str()) < 127)
	{
		std::cout << "char:'" << static_cast<char>(atoi(input.c_str())) << "'" << std::endl;
	}

	else if (CheckIsInt(input) && ((atoi(input.c_str()) < 32 && atoi(input.c_str()) >= 0) || atoi(input.c_str()) == 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::convert(const std::string &input)
{
	if (!checkInput(input))
	{
		std::cout << "Error: Invalid input format." << std::endl;
		return;
	}

	PrintChar(input);
	PrintInt(input);
	PrintFloat(input);
	PrintDouble(input);
}