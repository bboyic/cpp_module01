#include "Fixed.h"

Fixed::Fixed( void ):fractionalBits(8), fixedPoint(0) {
	std::cout << "Default constructor called\n";
//	fixedPoint = 0;
//	fractionalBits = 8;
}

Fixed::Fixed(const int raw):fractionalBits(8) {
	std::cout << "Int constructor called\n";
	fixedPoint = raw * (1 << fractionalBits);
}

Fixed::Fixed(const float raw):fractionalBits(8) {
	std::cout << "Float constructor called\n";
	fixedPoint = (int)roundf(raw * (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& cout, const Fixed& obj) {
	cout << obj.toFloat();
	return (cout);
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	fixedPoint = other.fixedPoint;
	return (*this);
}

Fixed::Fixed(const Fixed& other):fractionalBits(8) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

float	Fixed::toFloat(void) const {
	return (((float)fixedPoint / (1 << fractionalBits)));
}

int		Fixed::toInt(void) const {
	return ((fixedPoint / (1 << fractionalBits)));
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called\n";
}