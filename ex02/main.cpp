#include <iostream>
#include "./Array.hpp"

void	testString(void)  {
	Array<std::string> *Quotes = new Array<std::string>(4);
	(*Quotes)[0] = "Hello world";
	(*Quotes)[1] = "Hello second";
	(*Quotes)[2] = "Hello Third";
	(*Quotes)[3] = "Hello Ft";
	for (int i = 0; i < 4; i += 1)
		std::cout << "The value at index " << i << " is : " << (*Quotes)[i] << std::endl;
}

void testNumbers(void) {
	Array<int> *Numbers = new Array<int>(4);

	(*Numbers)[0] = 12;
	(*Numbers)[1] = 22;
	(*Numbers)[2] = 33;
	(*Numbers)[3] = 44;
	for (int i = 0; i < 4; i += 1)
		std::cout << "The value at index " << i << " is : " << (*Numbers)[i] << std::endl;
}

int main(void) {
	std::cout << "---- Testing Numbers -----\n";
	testNumbers();
	std::cout << "----------\n\n";
	std::cout << "---- Testing Strings -----\n";
	testString();
	std::cout << "----------\n\n";
	return (0);
}
