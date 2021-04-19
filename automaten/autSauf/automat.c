#include <stdio.h>
#include <stdlib.h>

typedef enum Zustand {nuechtern, heiter, betrunken, eins, zwei, drei, vier} zustand_t;

int main(void)
{
  zustand_t g; /*nächster Zustans*/
  g = nuechtern; 
  zustand_t f; /*Ausgang + Zustand*/
  f = nuechtern;
  char e;    /* Eingang */

  while (1)
  {
    /* Eingabe */
    if(scanf(" %c",&e) == EOF)
    {
      printf(" \n");
      exit (0);
    }
    if (g == nuechtern) {
	    if (e == '0') {
		    f = nuechtern;
	    } else if (e == '1') {
			f = heiter;
			g = heiter;
            }
     }
     else if(g == heiter) {
	     if (e == '0') {
		     g = eins;
	     } else if (e == '1') {
		     f = betrunken;
		     g = betrunken;
	     }
    }
    else if (g == betrunken) {
	    if (e == '0') {
		    g = eins;
	    }
    }
    else if (g == eins) {
	    if (e == '0') {
		    g = zwei;
	    } else if (e == '1') {
		    switch(f){
			    case heiter: g = heiter; break;
		            case betrunken: g = betrunken; break;
		    }
            }
    }
    else if (g == zwei) {
	    if (e == '0') {
                    g = drei;
            } else if (e == '1') {
                    switch(f){
                            case heiter: g = heiter; break;
                            case betrunken: g = betrunken; break;
                    }
            }
    }
    else if (g == drei) {
            if (e == '0') {
                    g = vier;
            } else if (e == '1') {
                    switch(f){
                            case heiter: g = heiter; break;
                            case betrunken: g = betrunken; break;
                    }
            }
    }
    else if (g == vier) {
            if (e == '0') {
                    g = nuechtern;
		    f = nuechtern;
            } else if (e == '1') {
                    switch(f){
                            case heiter: g = heiter; break;
                            case betrunken: g = betrunken; break;
                    }
            }
    }


    /*Ausgabe*/
    printf ("%i", f); fflush(stdout);
  }
  return 0;
}
