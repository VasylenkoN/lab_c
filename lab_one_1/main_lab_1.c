#include <stdio.h>
#include <math.h>

int main()
{

float x, f , g;

printf("Inpunt number for X: ");
scanf("%f",&x);
f = exp(-(fabs(x)))*sin(x);
g = exp(-(fabs(x)))*cos(x);

printf("F = %f \n G = %f", f,g);
return 0;
}
