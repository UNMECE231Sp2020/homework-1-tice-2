#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);

Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);


 void f_handler1( (*funP)(complex)(complex), complex c1, complex c2));
 void f_handler2( double (*funP1) complex, complex c1);

