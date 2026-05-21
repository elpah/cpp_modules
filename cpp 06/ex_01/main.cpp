#include "Serializer.hpp"

int main(void)
{
	Data person;
	person.name = "elpah";
	person.age = 10;

	Data *ptr = &person;
	uintptr_t raw = Serializer::serialize(ptr);
	Data *restored = Serializer::deserialize(raw);

	std::cout << "address is identical: " << ptr << " = " << restored << std::endl;
	std::cout << "ptr name : " << ptr->name << " = raw name: " << restored->name << std::endl;
	std::cout << "ptr age : " << ptr->age << " = raw age: " << restored->age << std::endl;
}