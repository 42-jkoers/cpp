#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(int n) {
	value = n << fractionalBits;
}

Fixed::Fixed(float n) {
	value = roundf(n * (1 << fractionalBits)); // no std::roundf?
}

Fixed::Fixed(void) {
	value = 0;
}

Fixed::Fixed(const Fixed& cp) {
	*this = cp;
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

int Fixed::toInt(void) const {
	return value >> fractionalBits;
}

float Fixed::toFloat(void) const {
	return (float)value / (1 << fractionalBits);
}

Fixed& Fixed::operator=(const Fixed& cp) {
	value = cp.getRawBits();
	return *this;
}

bool Fixed::operator<(const Fixed& cp) const {
	return value < cp.getRawBits();
}

bool Fixed::operator>(const Fixed& cp) const {
	return value > cp.getRawBits();
}

bool Fixed::operator>=(const Fixed& cp) const {
	return value >= cp.getRawBits();
}

bool Fixed::operator<=(const Fixed& cp) const {
	return value <= cp.getRawBits();
}

bool Fixed::operator==(const Fixed& cp) const {
	return value == cp.getRawBits();
}

bool Fixed::operator!=(const Fixed& cp) const {
	return value != cp.getRawBits();
}

Fixed Fixed::operator+(const Fixed& cp) const {
	return this->toFloat() + cp.toFloat();
}

Fixed Fixed::operator-(const Fixed& cp) const {
	return this->toFloat() - cp.toFloat();
}

Fixed Fixed::operator*(const Fixed& cp) const {
	return this->toFloat() * cp.toFloat();
}

Fixed Fixed::operator/(const Fixed& cp) const {
	return this->toFloat() / cp.toFloat();
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	value++;
	return old;
}

Fixed Fixed::operator++() {
	++value;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	value--;
	return old;
}

Fixed Fixed::operator--() {
	--value;
	return *this;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return a > b ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return a < b ? a : b;
}

std::ostream& operator<<(std::ostream& o, const Fixed& f) {
	o << f.toFloat();
	return o;
}
