#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &other)
{
	(void)other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	std::cout << "passed pointer to serialize: " << ptr << std::endl;
	std::cout << "serialized pointer: " << reinterpret_cast<uintptr_t>(ptr) << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{

	std::cout << "raw data: " << raw << std::endl;
	std::cout << reinterpret_cast<Data *>(raw) << std::endl;
	return reinterpret_cast<Data *>(raw);
}
