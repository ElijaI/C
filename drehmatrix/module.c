#include "stdio.h"
#include "matrix.h"

/**
 * Funktion - Addition von 2 Matrizen
 * Jedes einzelne Element wird mit dem Element der zweiten Matrix addiert
 * @param, die beiden Matrizen, welche übergeben werden, müssen diesselbe Anzahl an Zeilen und Spalten haben
 * @return, die Summe der beiden Matrien, als Matrix
 */
matrix_t matrixadd(matrix_t m1, matrix_t m2) {
	matrix_t ret;
	if (m1.zeilen == m2.zeilen && m1.spalten == m2.spalten) {
		ret.zeilen = m1.zeilen;
		ret.spalten = m1.spalten;
		for (int i = 0; i < m1.zeilen; i++) {
			for (int j = 0; j < m1.spalten; j++) {
				ret.matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
			}
		}
	}
	return ret;
}

/**
 * Funktion - Subtraktion von 2 Matrizen
 * Jedes einzelne Element wird mit dem Element der zweiten Matrix subtrahiert
 * @param, die beiden Matrizen, welche übergeben werden, müssen diesselbe Anzahl an Zeilen und Spalten haben
 * @return, die Differenz der beiden Matrizen, als Matrix
 */
matrix_t matrixsub(matrix_t m1, matrix_t m2) {
	matrix_t ret;
        if (m1.zeilen == m2.zeilen && m1.spalten == m2.spalten) {
                ret.zeilen = m1.zeilen;
                ret.spalten = m1.spalten;
                for (int i = 0; i < m1.zeilen; i++) {
                        for (int j = 0; j < m1.spalten; j++) {
                                ret.matrix[i][j] = m1.matrix[i][j] - m2.matrix[i][j];
                        }
                }
        }
        return ret;
}

/**
 * Funktion - Skalarmultiplikation
 * Jedes einzelne Element der Matrix wird mit einem Skalar multipliziert
 * @param matrix_t m1, Matrix an der wird die Skalarmultiplikation ausführen
 * @param double skalar, der Skalar, ein Double
 * @return, die multiplizierte Matrix
 */
matrix_t skalarmult(matrix_t m1, double skalar) {
	matrix_t ret;
	ret.zeilen = m1.zeilen; 
	ret.spalten = m1.spalten;
	for (int i = 0; i < m1.zeilen; i++) {
        	for (int j = 0; j < m1.spalten; j++) {
                	ret.matrix[i][j] = skalar * (m1.matrix[i][j]);
              	}
    	}
	return ret;
}

/**
 * Funktion - Matrizen-Multiplikation
 * Multpliziert zwei Matrizen, dabei muss Matrix1 diesselbe Anzahl an Spalten haben, wie Matrix2 Zeilen hat (m1.spalten == m2.zeilen)
 * Beispiel: (1  0)   (1  2 -1)   (1  2 -1)	Multiplikationschema (am Beispiel): 1*1 + 0*0 = 1  -->
 * 	     (2 -1) x (0  3  0) = (2  1 -2)		anhand der Indexe: m1[0][0]*m2[0][0] + m1[0][1]*m2[1][0] = ret[0][0]
 * @param matrix_t m1, matrix_t m2, die zu multiplizierenden Matrizen 
 * return, eine Matrix, als Ergebnis der Multiplikation
 */
matrix_t matrixmult(matrix_t m1, matrix_t m2) {
	matrix_t ret;
	double sum = 0.0;
	ret.zeilen = m1.zeilen;
        ret.spalten = m2.spalten;
	if (m1.spalten == m2.zeilen) {
		for (int i = 0; i < m1.zeilen; i++) {
			for (int j = 0; j < m2.spalten; j++) {
				for (int n = 0; n < m2.zeilen; n++) {
				       sum = sum + m1.matrix[i][n] * m2.matrix[n][j];
				}
				ret.matrix[i][j] = sum;
				sum = 0;
		 	}
		}		
	}
	return ret;
}


/**
 * Funktion zum Ausgeben der Matrizen
 * @param: matrix_t m, die auszugebende Matrix
 * @param: char s[], Titel der Ausgabe als String (Char-Array)
 */
void printmatrix(matrix_t m) {
        for (int i = 0; i < m.zeilen; i++) {
                for (int j = 0; j < m.spalten; j++) {
                        printf("%lf ", m.matrix[i][j]);
                }
        }
        printf("\n");
}

