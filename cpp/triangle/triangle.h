#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {
	enum class flavor {
		equilateral,
		isosceles,
		scalene
	};

	flavor kind(double a, double b, double c);
	bool is_a_triangle(double a, double b, double c);
}  

#endif // TRIANGLE_H