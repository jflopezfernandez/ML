
#ifndef ML_ML_H_
#define ML_ML_H_

#ifdef ML_API_EXPORTS
#define ML_API __declspec(dllexport)
#else
#define ML_API __declspec(dllimport)
#endif

#include "point.h"

extern "C" ML_API int Fibonacci(const int n);


#endif // ML_ML_H_
