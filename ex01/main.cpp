#include <iostream>
#include "./Iter.hpp"

template <typename T>
void	printParam(T param) {
	std::cout << "Value : " << param << std::endl;
}


int main(void) {
	int numbers[3] = {1, 8, 10};
	std::string names[3] = {"Sabakyou", "Liams", "Frued"};

	iter(numbers, 3, printParam);
	iter(names, 3, printParam);

	return (0);
}
