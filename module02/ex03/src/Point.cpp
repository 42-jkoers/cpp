#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {}

Point::Point(const float& _x, const float& _y) : x(Fixed(_x)), y(Fixed(_y)) {}

// Point::Point(const Point& cp) : x(Fixed(cp.getX())), y(Fixed(cp.getY())) {}

Point::~Point() {}

float Point::getX() const {
	return x.toFloat();
}

float Point::getY() const {
	return y.toFloat();
}

Point& Point::operator=(const Point& cp) {
	this->x = Fixed(cp.getY());
	return *this;
}
