#include "./Whatever.hpp"
#include <iostream>
template <typename param>
void	testSwap(param A, param B) {
	std::cout << "------- Testing the swap ------\n";
	std::cout << "The value of A before swap: " << A << std::endl;
	std::cout << "The value of B before swap: " << B << std::endl;
	std::cout << "----- Performing the swap ----\n";
	swap(A, B);
	std::cout << "The value of A after swap: " << A << std::endl;
	std::cout << "The value of B after swap: " << B << std::endl;
}

template <typename param>
void	testMax(param A, param B) {
	std::cout << "------- Testing the Max func ------\n";
	std::cout << "The value of A : " << A << std::endl;
	std::cout << "The value of B : " << B << std::endl;
	std::cout << "----- Performing the Max compare ----\n";
	param M = max(A, B);
	std::cout << "The Max value is : " << M << std::endl;
}


template <typename param>
void	testMin(param A, param B) {
	std::cout << "------- Testing the Min func ------\n";
	std::cout << "The value of A : " << A << std::endl;
	std::cout << "The value of B : " << B << std::endl;
	std::cout << "----- Performing the Min compare ----\n";
	param M = min(A, B);
	std::cout << "The Min value is : " << M << std::endl;
}

int main( void ) {
	int const numA = 12;
	int const numB = 44;

	std::string const strA = "The world";
	std::string const strB = "Ze world";

	testSwap(numA, numB);
	std::cout << "-----------\n\n";
	testSwap(strA, strB);
	std::cout << "-----------\n\n";

	testMax(numA, numB);
	std::cout << "-----------\n\n";
	testMax(strA, strB);
	std::cout << "-----------\n\n";

	testMin(numA, numB);
	std::cout << "-----------\n\n";
	testMin(strA, strB);
	std::cout << "-----------\n\n";

	return (0);
}
