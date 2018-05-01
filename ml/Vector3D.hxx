
#ifndef ML_VECTOR3D_H_
#define ML_VECTOR3D_H_

// Only A should be used when vector is normalized

// IDEA: Maybe the Vector3D constructor should automatically normalize a vector on construction

namespace ML {
	class ML_API Vector3D {
		Point3D a;
		Point3D b;

	public:
		Vector3D();

		// Non-normalized constructors

		Vector3D(const Point3D& p1, const Point3D& p2);

		Vector3D(const double x1, const double y1, const double z1, const double x2, const double y2, const double z2);

		Vector3D(const Vector3D& other);

		Vector3D(Vector3D&& other);

		// Normalized Constructors

		Vector3D(const double a, const double b, const double c);

		Vector3D(const Point3D& p);

		// Other functions

		void setA(const Point3D& point) noexcept;

		void setB(const Point3D& point) noexcept;

		Point3D getA() const noexcept;

		Point3D getB() const noexcept;

		double magnitude() const noexcept;

		Vector3D normalize(const Vector3D& other) const noexcept;

		Vector3D crossProduct(const Vector3D& other) const noexcept;

		Vector3D& operator = (const Vector3D& other) noexcept;

		Vector3D& operator+= (const Vector3D& other) noexcept;

		double operator [] (const int index) const noexcept;

		std::string toString() const noexcept;

		// Default: Print normalized
		void print() const noexcept;
	};

	Vector3D operator + (const Vector3D& v1, const Vector3D& v2) noexcept;
}


#endif // ML_VECTOR3D_H_
