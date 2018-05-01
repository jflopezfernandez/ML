
#ifndef ML_POINT_H_
#define ML_POINT_H_

#include <math.h>
#include <string>
#include <sstream>

namespace ML {
	class ML_API Point3D {
		double x;
		double y;
		double z;

	public:
		Point3D();

		Point3D(const double n);

		Point3D(const int a, const int b, const int c);

		Point3D(const double a, const double b, const double c);

		Point3D(const Point3D& other);

		double getX() const noexcept;

		double getY() const noexcept;

		double getZ() const noexcept;

		double distanceTo(const double a, const double b, const double c) const noexcept;

		double distanceTo(const Point3D& point) const noexcept;

		Point3D& operator = (const Point3D& other);

		Point3D& operator += (const Point3D& other);

		std::string toString() const noexcept;

		void print() const noexcept;
	};
} // End namespace ML


#endif // ML_POINT_H_
