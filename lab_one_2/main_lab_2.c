#include <stdio.h>
#include <math.h>

#include "fun_f.h"
#include "fun_g.h"

int main() {

	float x, f , g;

	printf("Inpunt number for X: ");
	scanf("%f",&x);
	f = fun_f_math(x);
	g = fun_g_math(x);

	printf("F = %f \n G = %f", f,g);
	return 0;
}
