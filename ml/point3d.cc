
#include <ml/ML.hxx>


namespace ML {
	__declspec(dllexport) Point3D::Point3D()
		: x(0), y(0), z(0) {
	}

	__declspec(dllexport) Point3D::Point3D(const double n)
		: x(n), y(n), z(n) {
	}

	__declspec(dllexport) Point3D::Point3D(const int a, const int b, const int c)
		: x(a), y(b), z(c) {
	}

	__declspec(dllexport) Point3D::Point3D(const double a, const double b, const double c)
		: x(a), y(b), z(c) {
	}

	__declspec(dllexport) Point3D::Point3D(const Point3D& other)
		: x(other.x), y(other.y), z(other.z) {
	}

	double __declspec(dllexport) Point3D::getX() const noexcept { return x; }

	double __declspec(dllexport) Point3D::getY() const noexcept { return y; }

	double __declspec(dllexport) Point3D::getZ() const noexcept { return z; }

	double __declspec(dllexport) Point3D::distanceTo(const double a, const double b, const double c) const noexcept {
		return std::sqrt(std::pow(a - x, 2) + std::pow(b - y, 2) + std::pow(c - z, 2));
	}

	double __declspec(dllexport) Point3D::distanceTo(const Point3D& point) const noexcept {
		return std::sqrt(std::pow(point.x - x, 2) + std::pow(point.y - y, 2) + std::pow(point.z - z, 2));
	}

	__declspec(dllexport) Point3D& Point3D::operator = (const Point3D& other) {
		x = other.x;
		y = other.y;
		z = other.z;

		return *this;
	}

	__declspec(dllexport) Point3D&  Point3D::operator += (const Point3D& other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	std::string __declspec(dllexport) Point3D::toString() const noexcept {
		std::ostringstream oss;

		oss << "(" << x << "," << y << "," << z << ")";

		return oss.str();
	}

	void __declspec(dllexport) Point3D::print() const noexcept {
		std::cout << this->toString() << '\n';
	}
} // End namespace ML
