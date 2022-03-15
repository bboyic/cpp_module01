#ifndef FIXED_D
# define	FIXED_D

#include <iostream>

/*Class Fixed*/

class Fixed {
	int	fixedPoint;
	int	fractionalBits;
public:
	Fixed( void );
	Fixed(const Fixed& other);
	Fixed&	operator=(const Fixed& other);
	int		getRawBits(void);
	void	setRawBits(int const raw);
	~Fixed( void );
};

#endif // FIXED_D

