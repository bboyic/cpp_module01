#include "Fixed.h"

Fixed::Fixed( void ) {
	fixedPoint = 0;
	fractionalBits = 8;
}

Fixed::Fixed(const Fixed& other) {
	fixedPoint = other.fixedPoint;
}

Fixed& Fixed::operator=(const Fixed& other) {
	fixedPoint = other.fixedPoint;
	return (*this);
}

int		Fixed::getRawBits(void) {
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	fixedPoint = raw;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called\n";
}