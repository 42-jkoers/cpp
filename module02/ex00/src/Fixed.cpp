#include "Fixed.hpp"

Fixed::Fixed(int n) {
	std::cout << "Constructor function called" << std::endl;
	value = n;
}

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& cp) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& cp) {
	std::cout << "Assignment operator called" << std::endl;
	value = cp.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called with " << raw << std::endl;
	value = raw;
}
