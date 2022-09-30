#ifndef FUNCTION_C
#define FUNCTION_C
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void print(float *array, int size) {
	int i;
	printf("\n[");
	for(i = 0; i < size; i++){
		printf("%.2f\t", array[i]);
	}
	printf("]");
}



void fill_array(float *array, int size) {
	int i, t;
	float temp;

	for(i = 0; i < size; i++){
        temp =(float)rand()/(float)(RAND_MAX/size);

        t = (float)rand()/(float)(RAND_MAX*size-50);
		
		if (t % 2 == 0) {
			array[i] = temp;
		} else {
			array[i] = -1 * temp;
		}

	}
}



void count_more_than_avg(float *array, int size) {
	int i, j;
	int quantity = 0;
	float summ = 0;
	for (i = 0; i < size; i++) {
		summ += array[i];
	}
	summ /= (float)size;
	for(j = 0; j < size; j++) {
		if (array[j] > summ) {
			quantity++;
		}
	}
	printf("\n\nThe number of elements greater than the average value of the array elements: %d", quantity);
}



void sum_fabs_first_negative(float *array, int size) {
  int i, k = 0;
  int num;
  float summ , tmp= 0.0;
  for (i = 0; i < size; i++) {
    if (k == 0) {
      if (array[i] < 0.0) {
        num = i;
        k++;
      }
    }
  }
  for (i = num + 1; i < size; i++) {
    tmp = array[i];
    summ += fabs(tmp);
  }
  printf("\n\nThe sum of the modules of the array elements located after the first negative element: %f", summ);
}


#endif
