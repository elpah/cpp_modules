#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>

int main(void)
{
	std::vector<int> numberVector;

	for (int i = 0; i < 10; i++)
	{
		numberVector.push_back(i);
	}
	try
	{
		easyfind(numberVector, 5);
		easyfind(numberVector, 4);
		easyfind(numberVector, 2);
		easyfind(numberVector, 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
