#include "triangle.h"
#include <stdexcept>

namespace triangle {

	flavor kind(double a, double b, double c) {
		if (!is_a_triangle(a, b, c)) {
			throw std::domain_error("this is not a triangle");
		}

		if (a == b && b == c) {
			return flavor::equilateral;
		}
		else if (a == b || b == c || a == c) {
			return flavor::isosceles;
		}
		else {
			return flavor::scalene;
		}
	}

	bool is_a_triangle(double a, double b, double c) {
		return (a + b >= c && b + c >= a && a + c >= b) && (a > 0 && b > 0 && c > 0);
	}

}  // namespace triangle
