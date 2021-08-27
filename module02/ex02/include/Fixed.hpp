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

	bool operator<(const Fixed& cp) const;
	bool operator>(const Fixed& cp) const;
	bool operator>=(const Fixed& cp) const;
	bool operator<=(const Fixed& cp) const;
	bool operator==(const Fixed& cp) const;
	bool operator!=(const Fixed& cp) const;

	Fixed operator+(const Fixed& cp) const;
	Fixed operator-(const Fixed& cp) const;
	Fixed operator*(const Fixed& cp) const;
	Fixed operator/(const Fixed& cp) const;

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed&		min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	int	  getRawBits(void) const;
	void  setRawBits(int const raw);
	int	  toInt(void) const;
	float toFloat(void) const;

  private:
	int				 value;
	const static int fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& f);

#endif
