#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(int n)
{
	std::cout << "Int constructor function called" << std::endl;
	value = n << fractionalBits;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(n * (1 << fractionalBits)); // no std::roundf ?
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed const &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called with" << raw << std::endl;
	value = raw;
}

int Fixed::toInt(void) const
{
	return value >> fractionalBits;
}

float Fixed::toFloat(void) const
{
	return (float)value / (1 << fractionalBits);
}

Fixed &Fixed::operator=(Fixed const &cp)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = cp.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}
