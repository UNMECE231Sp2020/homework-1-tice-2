#include <stdio.h>
#include <math.h>
#include "my_complex.h"


int main() {

	Complex a = {3, 4};
	Complex b = {5, 12};

	double(*funP)(Complex)[4](int,int)={Complex,Complex,Complex,Complex};
	double(*funP1)[2](Complex)(double,double){Complex,Complex};

	
	for(int i=0; i<3;i++)
	{
		funP=funP[i];
		printf("%d",*funP[i]);	
	}	

	for(int i=0;i<1;i++)
	{
		funP1=funP1[i];
		printf("/n%d",*funP1[i]);
	}

	return 0;
}
