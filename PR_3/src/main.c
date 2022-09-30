#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"


int main (int argc, char* argv[]) {
	srand(time(NULL));
	int i, n;
	printf("Enter n:");
	scanf("%d", &n);
	if (n < 1) {
		printf ("Error! The number of numbers in the array must not be less than 1!\n");
		return 0;
	}
	float mass[n];
    fill_array(mass, n);
    print(mass, n);
	count_more_than_avg(mass, n);
	sum_fabs_first_negative(mass, n);
    return 0;
}
