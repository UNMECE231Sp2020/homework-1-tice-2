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

/*void three_input_function( struct *complex, struct, struct)
 

  void two_input_function(function pointer, complex struct)

  */

// void f_handler1( (*fptr)(complex)(complex), complex c1, complex c2)
// void f_handler2( double (*ftpr) complex, complex c1)
// 

