#pragma once
#include "Fixed.hpp"

class Point {

	const Fixed x;
	const Fixed y;

  public:
	Point();
	Point(const float& x, const float& y);
	Point(const Point& cp);
	~Point();
	Point& operator=(const Point& cp);
	float  getX() const;
	float  getY() const;
};
