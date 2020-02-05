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
int power_funct(int x, int y)
{
	int i, product=1;
	for(i=1;i<=y;i++)
	{
		product*= x;
	}
	return product;
}
int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	return 0;
}
