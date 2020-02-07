#include <stdio.h>
#include <math.h>
#include "my_complex.h"


int main() {

	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*funP[4])(Complex,Complex) = {complex_add,complex_sub,
					       complex_mult,complex_div};
	double(*funP1[2])(Complex) = {magnitude, phase};

	
	for(int i=0; i<4;i++)
	{
		f_handler1(funP[i], a, b);
	}	

	for(int i=0;i<2;i++)
	{
		f_handler2(funP1[i], a);
	}

	printf("\n");
	return 0;
}
