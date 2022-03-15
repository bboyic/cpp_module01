#include <iostream>
#include "Fixed.h"
#include <string>

int main(void) {
	Fixed a;
	Fixed b(a);
	std::string c;

	a.setRawBits(4);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	b = a;
	std::cout << b.getRawBits() << std::endl;
	std::cin >> c;
	return (0);
}