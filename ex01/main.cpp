#include <iostream>
#include "./Iter.hpp"

template <typename T>
void	printParam(T param) {
	std::cout << "Value : " << param << std::endl;
}


int main(void) {
	int numbers[4] = {1, 8, 10, 99};
	std::string names[4] = {"Fire", "Water", "Air", "Earth"};

	iter(numbers, 4, printParam);
	iter(names, 4, printParam);

	return (0);
}
