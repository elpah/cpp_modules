#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	T *_array;
	size_t _length;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array &other);
	Array &operator=(const Array &other);

	T &operator[](size_t index);
	const T &operator[](size_t index) const;
	size_t size(void) const;
};

#endif