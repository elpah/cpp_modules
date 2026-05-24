#include "iter.hpp"

void increment(int &n)
{
	n += 1;
}

void printValue(const int &value)
{
	std::cout << value << " ";
}

int main(void)
{
	int arrayNum[] = {1, 2, 3, 4, 5, 6, 7};
	size_t len = sizeof(arrayNum) / sizeof(arrayNum[0]);

	std::cout
		<< "Print initial array: ";
	iter(arrayNum, len, printValue);
	std::cout << std::endl;

	std::cout << "Print after increment: ";
	iter(arrayNum, len, increment);
	iter(arrayNum, len, printValue);
	std::cout << std::endl;
}
