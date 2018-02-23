#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

double degreemath::Sin(double degree){
	double radian = (M_PI*degree)/180;
	return std::sin(radian);
}

double degreemath::Cos(double degree){
	double radian = (M_PI*degree)/180;
	return std::cos(radian);
}

double degreemath::Tg(double degree){
	double radian = (M_PI*degree)/180;
	return std::tan(radian);
}

double degreemath::Ctg(double degree){
	double radian = (M_PI*degree)/180;
	return 1/std::tan(radian);
}
