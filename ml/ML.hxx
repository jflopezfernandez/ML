
#ifndef ML_ML_H_
#define ML_ML_H_

#ifdef ML_API_EXPORTS
#define ML_API __declspec(dllexport)
#else
#define ML_API __declspec(dllimport)
#endif

#include <math.h>
#include <iostream>
#include <string>
#include <sstream>

#include <ml/Point3D.hxx>
#include <ml/Vector3D.hxx>

const int N = 3;

namespace ML {
	ML_API double* dvector(long nl, long nh);

	ML_API int* ivector(long nl, long nh);

	ML_API double **dmatrix(long nrl, long nrh, long ncl, long nch);

	ML_API void GaussJordanElimination(double a[N][N], int n, double **b, int m);
} // End namespace ML


#endif // ML_ML_H_
