#include <iostream>
#include "Fixed.h"
#include "Point.h"
#include <string>

int main(void) {
	Point	a(7, 7);
	Point	b(11, 1);
	Point	c(2, 2);
	Point	point(2, 3);
	
	if (bsp(a, b, c, point) == true)
		std::cout << "Congratulation\n";
	else
		std::cout << "Oh No\n";
	return (0);
}