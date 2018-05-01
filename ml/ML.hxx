
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

//extern "C" ML_API int Fibonacci(const int n);


#endif // ML_ML_H_
