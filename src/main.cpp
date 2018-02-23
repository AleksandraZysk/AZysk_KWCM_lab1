#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#define _USE_MATH_DEFINES
#include <cmath>
#endif

int main() {
	
	#ifdef USE_TRIGONOMETRY_DEGREE
	double a = degreemath::Sin(90);
	double b = degreemath::Cos(0);
	double c = degreemath::Tg(0);
	double d = degreemath::Ctg(90);
	return 0;
	#else
	double a = std::sin(90.0);
	double b = std::cos(0.0);
	double c = std::tan(0.0);
	double d = 1/std::tan(90.0);
	#endif
	

}	