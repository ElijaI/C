#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) {
	if (argc != 3) {
		printf("use: ./codierung.out <input file> <output file>\n");
		exit(-1);
	}
	FILE *in, *out;
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");	
	while(1) {
		char s [9];
		if (fgets(s, 9, in) != NULL) {
			fprintf(out, "%i",((s[0]+s[1]+s[3]+s[4]+s[6])-(48*5))%2);
			fprintf(out, "%i",((s[0]+s[2]+s[3]+s[5]+s[6])-48*5)%2);
			fprintf(out, "%c",s[0]);
			fprintf(out, "%i",((s[1]+s[2]+s[3]+s[7])-48*4)%2);
			fprintf(out, "%c",s[1]);
			fprintf(out, "%c",s[2]);
			fprintf(out, "%c",s[3]);
			fprintf(out, "%i",((s[4]+s[5]+s[6]+s[7])-48*4)%2);
			fprintf(out, "%c",s[4]);
			fprintf(out, "%c",s[5]);
			fprintf(out, "%c",s[6]);
			fprintf(out, "%c", s[7]);
		}
		else {
			break;
		}
	}
	fclose(in);
	fclose(out);
	return(0);
}
