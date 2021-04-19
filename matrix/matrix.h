#ifndef __MATRIX_STRUCT_H__
#define __MATRIX_STRUCT_H__

//Defnition des Matrix-Datentyps
typedef
	struct matrix_s {
		double matrix[10][10];
		int zeilen;
		int spalten;
	} matrix_t;

//Prototypen der Funktionen
matrix_t matrixadd(matrix_t m1, matrix_t m2);
matrix_t matrixsub(matrix_t m1, matrix_t m2);
matrix_t skalarmult(matrix_t m1, double skalar);
matrix_t matrixmult(matrix_t m1, matrix_t m2);
void printmatrix(matrix_t m, char s[]);

#endif
