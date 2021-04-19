#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(){
	//Deklarieren von char Arrays
	char eingabe[500];
	char *args[50];
	char befehle[50][100];
	char a;

	//Deklarieren und initialisieren von Variablen
	int i=0;
	int j=0;
	int k=0;
	int abbruch=0;
        int b=0;

	//Die Schleife wird so lange wiederholt, bis exit eingegeben wird
  	do{
		//Das befahle Array wird mit 0 gefüllt
		for(i=0;i<50;i++){
			for(j=0;j<100;j++){
				befehle[i][j]=0;
			}
			args[i]=befehle[i];
		}

		//Die Eingabe wird eingelesen
		fgets(eingabe,500,stdin);
		
		//Variablen werden zurückgesetzt
		j=0;
		k=0;
		b=1;
		abbruch=0;

		/*
		 * Falls keine neue Zeile ist, wird die Eingabe Zeichenweise in
		 * das befehle Array geschrieben.
		 */
		for(i=0;i<500&&eingabe[i]!=0&&abbruch==0;i++){
			if(eingabe[i]=='\n'){
				abbruch=1;
			}else
		       	if(eingabe[i]!=' '){
				  befehle[j][k]=eingabe[i];
				  k++;
				  b=0;
		 	  }else {
				  if(eingabe[i]==' '&&!b){
				        befehle[j][k+1]=0;
				        k=0;
					j++;
					b=1;
			 	  }
		          }
		}
		args[j+1]=0;

		//Der Befehl wird ausgeführt
		int erg=fork();
		switch (erg){
 			case -1:
				printf("Fehler");
				break;
			case 0:
				execvp(args[0],args);
				exit(0);
				break;
			default:
				wait(NULL);
				break;
		}	
	}while(strcmp(args[0],"exit")!=0);
}
