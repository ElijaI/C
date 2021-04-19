#include <stdio.h>
#include <stdlib.h>

const int g[2][2] ={{1, 0},{1, 1}}; /* naechster Zustand */
const int f[2][2] ={{0, 1},{0, 0}}; /* Ausgang */

int main(void)
{
  char e;    /* Eingang */
  int z = 0; /* Zustand */
  int offset = 0;
  
  while (1)
  {
    /* Eingabe */
    if(scanf(" %c",&e) == EOF)
    {
      printf(" \n");
      exit (0);
    }
    offset = 0;
    if (z == 0) {
	    if(e > '0' && e <= '9') {
            	e = '1';
	    } else if (e == '0') {
		e = '0';
		offset = 1;	
	    } else {
            	e = '0';
    	    }
    } else if(e >= '0' && e <= '9') {
	    e = '1';
    } else {
	    e = '0';
    }

    /*Ausgabe - Eingang (e-48) ist die Zahl 0 oder 1*/
    printf ("%i", f[z][(e-'0')]+offset); fflush(stdout);
    /* naechster Zustand - e abfragen und abbilden '0' --> 0 und '1' --> 1 */
    z = g[z][(e=='0'?0:1)];
  }    
  return 0;
}
