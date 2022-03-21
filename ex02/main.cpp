#include <iostream>
#include "Fixed.h"
#include <string>

int main(void) {
	Fixed	a;
	Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed	c;

	c = b;
	std::cout << "c: " << c << std::endl;
	++c;
	std::cout << "c: " << c << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	//std::cout << ++a << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "b * b: " << (b * b) << std::endl;
	//std::cout << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "b++: " << b++ << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "b--: " << b-- << std::endl;
	std::cout << "--b: " << --b << std::endl;
	return (0);
}