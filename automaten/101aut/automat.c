/**
 * 101Automat
 * Ein Automat mit E={0, 1} und A={0, 1} gibt immer dann 1 aus, 
 * wenn er im Eingangsstrom 101 erkannt hat, sonst gibt er 0 aus.
 * @author: Elija Innerkofer
 * 11.02.2021
 */

#include <stdio.h>
#include <stdlib.h>

const int g[3][2] ={{0 , 1}, {2, 1}, {0, 1}}; //naechster zustand
const int f[3][2] ={{0 , 0}, {0, 0}, {0, 1}}; //ausgang

int main (void) {
	char e; //eingang
	int z = 0; //zustand
	while (1) {
		//wenn endo of file = strg + d
		if(scanf(" %c", &e) == EOF) {
			printf(" \n");
			exit(0);
		}
		//wenn falsche zeichen
		if ((e != '0') && (e != '1')) {
			printf(" \n");
			exit(0);
		}
		//Ausgabe - Eingang (e-48) ist '0' oder '1' als zeichen
		printf("%i", f[z][e-'0']);
		fflush(stdout);
		//naechster zustand
		z = g[z][(e=='0'?0:1)];
	}
	return(0);
}
