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
   int (*int_fn[2](int,int) = {magnitude, phase};
    
       

       return 0;
  }

    or 

   
  */
int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	return 0;
}
