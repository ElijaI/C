/*
 * bakterien.c
 * simuliert das Leben eines Bakterien-Multiplikation mit 4 Generationen:
 * G1, G2, G3, G4. Dazu wird die Funktion matrixmult aus der Datei module.c verwendet.
 * Die einzelnen variablen Werte sind vorher festgelegt, keine Benutzereingabe. 
 * Insgesamt werden aktuell 50 Schritte in der Zeit simuliert
 * @author: Elija Innerkofer
 * 24.03.2021
 */

#include <stdio.h>
#include "matrix.h"

int main (void) {
	//Deklaration
	matrix_t alt;
	matrix_t m;
	matrix_t neu;
	double p1 = 0.1;
	double p2 = 0.15;
	double p3 = 0.17;
	double r1 = 1.20;
	double r2 = 1.12;
	double r3 = 1.11;
	double r4 = 1.06;
	//Festlegung der Groesse
	alt.zeilen = 4;
	alt.spalten = 1;
	m.zeilen = 4;
	m.spalten = 4;
	neu.zeilen = 4;
	neu.spalten = 1;
	//init alt
	alt.matrix[0][0] = 1.0;
	alt.matrix[1][0] = 1.0;
	alt.matrix[2][0] = 1.0;
	alt.matrix[3][0] = 1.0;
	//init m
	m.matrix[0][0] = r1;
	m.matrix[0][1] = r2;
	m.matrix[0][2] = r3;
	m.matrix[0][3] = r4;
	m.matrix[1][0] = p1;
	m.matrix[1][1] = 0.0;
	m.matrix[1][2] = 0.0;
	m.matrix[1][3] = 0.0;
	m.matrix[2][0] = 0.0;
	m.matrix[2][1] = p2;
	m.matrix[2][2] = 0.0;
	m.matrix[2][3] = 0.0;
	m.matrix[3][0] = 0.0;
	m.matrix[3][1] = 0.0;
	m.matrix[3][2] = p3;
	m.matrix[3][3] = 0.0;
	//Berechnung der Bakterienkulturen in der Zeit
	printf("G1;G2;G3;G4\n");
	for (int i = 0; i < 50; i++) {
		//zeilenweise ausgabe
		printf("%f;%f;%f;%f\n", alt.matrix[0][0], alt.matrix[1][0], alt.matrix[2][0], alt.matrix[3][0]); 
		neu = matrixmult(m, alt);
		alt = neu;
	}
	return(0);
}
