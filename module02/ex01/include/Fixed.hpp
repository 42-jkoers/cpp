#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{

public:
	Fixed(int n);
	Fixed(float n);
	Fixed(void);
	Fixed(Fixed const &cp);
	~Fixed(void);
	Fixed &operator=(Fixed const &cp);

	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int value;
	const static int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
