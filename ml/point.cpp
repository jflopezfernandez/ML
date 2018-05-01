
#include "ML.h"


namespace ML {
	__declspec(dllexport) Point::Point()
		: x(0), y(0), z(0) {
	}

	__declspec(dllexport) Point::Point(const int a, const int b, const int c)
		: x(a), y(b), z(c) {
	}

	__declspec(dllexport) Point::Point(const double a, const double b, const double c)
		: x(a), y(b), z(c) {
	}

	double __declspec(dllexport) Point::distanceTo(const double a, const double b, const double c) const noexcept {
		return std::sqrt(std::pow(a - x, 2) + std::pow(b - y, 2) + std::pow(c - z, 2));
	}

	double __declspec(dllexport) Point::distanceTo(const Point& point) const noexcept {
		return std::sqrt(std::pow(point.x - x, 2) + std::pow(point.y - y, 2) + std::pow(point.z - z, 2));
	}

	std::string __declspec(dllexport) Point::toString() const noexcept {
		std::ostringstream oss;

		oss << "(" << x << "," << y << "," << z << ")";

		return oss.str();
	}
} // End namespace ML
