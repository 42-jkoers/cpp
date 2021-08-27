#include "Fixed.hpp"
#include "Point.hpp"

float sign(const Point& p1, const Point& p2, const Point& p3) {
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(const Point& v1, const Point& v2, const Point& v3, const Point& pt) {
	float d1 = sign(pt, v1, v2);
	float d2 = sign(pt, v2, v3);
	float d3 = sign(pt, v3, v1);

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

int main(void) {

	return (0);
}
