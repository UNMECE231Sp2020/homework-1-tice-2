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

//Tice^2 function prototypes
/**************************************************************
 *f_handler1- returns nothing takes in a function pointer that
 returns a complex struct, and two complex structs that are
 inputs for function pointer.

 * f_handler2- also returns nothing, takes in a function pointer
 that returns a double and a complex struct.
 
 * *************************************************************/
 void f_handler1( (*funP)(Complex)(Complex), Complex c1, Complex c2);
 void f_handler2( double (*funP1)(complex), complex c1);

