#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

  public:
	Fixed(int n);
	Fixed(void);
	Fixed(const Fixed& cp);
	~Fixed(void);
	Fixed& operator=(const Fixed& cp);

	int	 getRawBits(void) const;
	void setRawBits(int const raw);

  private:
	int				 value;
	const static int fractionalBits = 8;
};

#endif
