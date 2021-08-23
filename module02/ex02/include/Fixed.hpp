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

	bool operator<(Fixed const &cp) const;
	bool operator>(Fixed const &cp) const;
	bool operator>=(Fixed const &cp) const;
	bool operator<=(Fixed const &cp) const;
	bool operator==(Fixed const &cp) const;
	bool operator!=(Fixed const &cp) const;

	Fixed operator+(Fixed const &cp) const;
	Fixed operator-(Fixed const &cp) const;
	Fixed operator*(Fixed const &cp) const;
	Fixed operator/(Fixed const &cp) const;

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;

private:
	int value;
	const static int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
