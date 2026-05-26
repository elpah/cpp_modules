#include "easyfind.hpp"

template <typename T>
void easyfind(T &first, int findValue)
{
	typename T ::iterator it = std::find(first.begin(), first.end(), findValue);
	if (it != first.end())
	{
		std::cout << "found value: " << findValue
				  << " at position: "
				  << std::distance(first.begin(), it)
				  << std::endl;
		return;
	}
	throw std::runtime_error("couldnt find value");
}