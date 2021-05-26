#include <stdio.h>
#include <math.h>
#include "matrix.h"

int main(void) {
	matrix_t m1, p;
	double winkel = M_PI/180;
	double scalar = 1.005;

	m1.zeilen = 2;
	m1.spalten = 2;
	p.zeilen = 2;
	p.spalten = 1;

	m1.matrix[0][0] = cos(winkel);
	m1.matrix[0][1] = -sin(winkel);
	m1.matrix[1][0] = sin(winkel);
	m1.matrix[1][1] = cos(winkel);
	
	p.matrix[0][0] = 1;
	p.matrix[1][0] = 0;

	for(int i = 0; i <360; i++) {
		printmatrix(p);
		p = matrixmult(m1, p);
		p = skalarmult(p, scalar);
	}

	return(0);

	
}
