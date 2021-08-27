#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <string>

class Fixed {

  public:
	Fixed(int n);
	Fixed(float n);
	Fixed(void);
	Fixed(const Fixed& cp);
	~Fixed(void);
	Fixed& operator=(const Fixed& cp);

	int	  toInt(void) const;
	float toFloat(void) const;
	int	  getRawBits(void) const;
	void  setRawBits(int const raw);

  private:
	int				 value;
	const static int fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& f);

#endif
