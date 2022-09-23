#include <math.h>
#ifndef FUN_G_H
#define FUN_G_H


int fun_g_math(float  x) {

	return exp(-(fabs(x)))*cos(x);
}

#endif
