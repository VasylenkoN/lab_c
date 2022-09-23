#include <math.h>
#ifndef FUN_F_H
#define FUN_F_H

int fun_f_math(float x) {

	return exp(-(fabs(x)))*sin(x);
}
#endif
