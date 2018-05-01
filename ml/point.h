#ifndef ML_POINT_H_
#define ML_POINT_H_

#include <math.h>
#include <string>
#include <sstream>

namespace ML {
	class ML_API Point {
		double x;
		double y;
		double z;

	public:
		Point();

		Point(const int a, const int b, const int c);

		Point(const double a, const double b, const double c);

		double distanceTo(const double a, const double b, const double c) const noexcept;

		double distanceTo(const Point& point) const noexcept;

		std::string toString() const noexcept;
	};
} // End namespace ML


#endif // ML_POINT_H_
