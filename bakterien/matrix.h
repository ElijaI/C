#ifndef __MATRIX_STRUCT_H__
#define __MATRIX_STRUCT_H__

//Def des Matrix-Datentyps
typedef
	struct matrix_s {
		double matrix[10][10];
		int zeilen;
		int spalten;
	} matrix_t;

//Prototyp Funktion für Matrix-Addition
matrix_t matrixadd(matrix_t m1, matrix_t m2);

//Prototyp Funktion für Matrix-Subtraktion
matrix_t matrixsub(matrix_t m1, matrix_t m2);

//Prototyp Funktion für Skalarmultiplikation
matrix_t skalarmult(matrix_t m1, double skalar);

//Prototyp Funktion für Matrizen-Multiplikation
matrix_t matrixmult(matrix_t m1, matrix_t m2);

//Prototyp der Funktion zur Ausgabe von Matrizen mit Text
void printmatrix(matrix_t m, char s[]);
#endif
