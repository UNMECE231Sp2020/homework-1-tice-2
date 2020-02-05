#include <stdio.h>
#include <math.h>
#include "my_complex.h"

int _Add_(int x, int y)
{
	return x+y;
}
int _Sub_(int x, int y)
{
	return x-y;
}
int _Multi_(int x, int y)
{
	return x * y;
}
int power_division(int x, int y)
{
	return x/y;
}

 /*
 float magnitude(int x, int y)
 {
 	float z;
	z=sqrt((x*x)+y*y;
	return z;
 }

int phase(int x, int y)
{
	return sin(x+y);
	
}
  */
int main() {

	//int(*int_fn[4](int,int))={_Add_,_Sub_,Multi_,Power_Division};
	//int(*int_fn2[2](int,int))={magnitude,phase};	
	Complex a = {3, 4};
	Complex b = {5, 12};

	return 0;
}
