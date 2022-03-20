#ifndef FIXED_D
# define	FIXED_D

#include <iostream>
#include <cmath>

/*Class Fixed*/

class Fixed {
	int			fractionalBits;
	int	fixedPoint;
public:
	Fixed( void );
	Fixed(int	raw);
	Fixed(float	raw);
	Fixed(const Fixed& other);
	Fixed&	operator=(const Fixed& other);
	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);
	Fixed	operator++( int );
	Fixed	operator++( void );
	Fixed	operator--( void );
	Fixed	operator--( int );
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed( void );
};

std::ostream& operator<<(std::ostream& cout, const Fixed& obj);

#endif // FIXED_D

