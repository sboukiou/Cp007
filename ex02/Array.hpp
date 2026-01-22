#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <class C>
class Array {
	private:
		C	*inventory;
		size_t	length;
	public:
		Array(void) {
			length = 0;
			inventory = new C[length] ;
			if (inventory == NULL)
				throw (std::runtime_error("Bad allocation"));
		}
		Array(int len)  {
			if (len <= 0)
				throw (std::runtime_error("Invalid array length"));
			length = len;
			inventory = new C[length] ;
			if (inventory == NULL)
				throw (std::runtime_error("Bad allocation"));
		}
		Array(Array &other) {
			length = other.length;
			inventory = new C[length] ;
			if (inventory == NULL)
				throw (std::runtime_error("Bad allocation"));
			for (size_t	idx = 0; idx < length; idx += 1)
				inventory[idx] = other[idx];
		}
		Array	&operator=(Array &other) {
			if (inventory != NULL)
				delete inventory;
			length = other.length;
			inventory = new C[length] ;
			if (inventory == NULL)
				throw (std::runtime_error("Bad allocation"));
			for (size_t	idx = 0; idx < length; idx += 1)
				inventory[idx] = other[idx];
			return (*this);
		}
		C	&operator[](int	idx) {
			if (idx < 0 || (size_t)idx >= length)
				throw (std::out_of_range("Index out of bounds"));
			return inventory[idx];
		}

		size_t	size(void) {
			return (length);
		}
		~Array(void) { delete [] inventory; }
};

#endif /* ARRAY_HPP */
