
#include <ml/ML.hxx>


namespace ML {
	__declspec(dllexport) Vector3D::Vector3D()
		: a { 0, 0, 0 }, b { 0, 0, 0 }
	{ }

	__declspec(dllexport) Vector3D::Vector3D(const Point3D& p1, const Point3D& p2)
		: a { p1 }, b { p2 } {
	}

	__declspec(dllexport) Vector3D::Vector3D(const double x1, const double y1, const double z1, const double x2, const double y2, const double z2)
		: a { x1, y1, z1 }, b { x2, y2, z2 } {
	}

	__declspec(dllexport) Vector3D::Vector3D(const Vector3D& other)
		: a { other.a }, b { other.b } {
	}

	__declspec(dllexport) Vector3D::Vector3D(Vector3D&& other) {
		Vector3D newVector(std::move(other));
	}

	__declspec(dllexport) Vector3D::Vector3D(const double a, const double b, const double c)
		: a { a, b, c }, b { 0 } {
	}

	__declspec(dllexport) Vector3D::Vector3D(const Point3D& point)
		: a { point }, b { 0 } {
	}

	void __declspec(dllexport) Vector3D::setA(const Point3D& point) noexcept {
		a = point;
	}

	void __declspec(dllexport) Vector3D::setB(const Point3D& point) noexcept {
		b = point;
	}

	Point3D Vector3D::getA() const noexcept { return a; }

	Point3D Vector3D::getB() const noexcept { return b; }

	double __declspec(dllexport) Vector3D::magnitude() const noexcept {
		return a.distanceTo(b);
	}

	Vector3D Vector3D::normalize(const Vector3D& other) const noexcept {
		// IMPLEMENT

		return {};
	}

	// TODO: I need to be using normalized vectors, not this nonsense
	// ERROR: Crashing on execution [Vector3D::crossProduct(const Vector3D& other]
	Vector3D __declspec(dllexport) Vector3D::crossProduct(const Vector3D& other) const noexcept {
		Vector3D newVector;
		
		//newVector.a = { a.getY() * other.a.getZ() - a.getZ() * other.a.getY(), a.getZ() * other.a.getX() - a.getX() * other.a.getZ(), a.getX() * other.a.getY() - a.getY() * other.a.getX() };
		//newVector.b = { b.getY() * other.b.getZ() - b.getZ() * other.b.getY(), b.getZ() * other.b.getX() - b.getX() * other.b.getZ(), b.getX() * other.b.getY() - b.getY() * other.b.getX() };



		return newVector;
	}

	__declspec(dllexport) Vector3D& Vector3D::operator = (const Vector3D& other) noexcept {
		a = other.a;
		b = other.b;

		return *this;
	}

	__declspec(dllexport) Vector3D& Vector3D::operator+= (const Vector3D& other) noexcept {
		a += other.a;
		b += other.b;

		return *this;
	}

	// NOTE: This function presumes the point access method is not zero-indexed
	// NOTE: This function also presumes the vector is normalized
	__declspec(dllexport) double Vector3D::operator [] (const int index) const noexcept {
		switch (index) {
			case 1: {
				return a.getX();
			} break;

			case 2: {
				return a.getY();
			} break;

			case 3: {
				return a.getZ();
			} break;

			default: {
				return 0;
			}
		}
	}

	std::string __declspec(dllexport) Vector3D::toString() const noexcept {
		std::ostringstream oss;

		oss << a.toString();

		return oss.str();
	}

	void __declspec(dllexport) Vector3D::print() const noexcept {
		std::cout << this->toString() << '\n';
	}

	Vector3D operator + (const Vector3D& v1, const Vector3D& v2) noexcept {
		Vector3D sum = v1;

		sum += v2;

		return sum;
	}
}
