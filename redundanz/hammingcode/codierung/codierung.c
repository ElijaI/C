#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *in, *out;
	char bit[9];
	char codbit[13];
	int i;
	in = fopen("/home/elija/c/redundanz/hammingcode/generator/generiert.txt", "r");
	out = fopen("codierung.txt", "w");

	while(fgets(bit, 9, in) != NULL) {
		codbit[0] = (atoi(&bit[0]) + atoi(&bit[1]) + atoi(&bit[3]) + atoi(&bit[4]) + atoi(&bit[6])) % 2 + 48;
		codbit[1] = (atoi(&bit[0]) + atoi(&bit[2]) + atoi(&bit[3]) + atoi(&bit[5]) + atoi(&bit[6])) % 2 + 48;
		codbit[2] = bit[0];
		codbit[3] = (atoi(&bit[1]) + atoi(&bit[2]) + atoi(&bit[3]) + atoi(&bit[7])) % 2 + 48;
		codbit[4] = bit[1];
		codbit[5] = bit[2];
		codbit[6] = bit[3];
		codbit[7] = (atoi(&bit[4]) + atoi(&bit[5]) + atoi(&bit[6]) + atoi(&bit[7])) % 2 + 48;
		codbit[8] = bit[4];
		codbit[9] = bit[5];
		codbit[10] = bit[6];
		codbit[11] = bit[7];

		fprintf(out, "%s\n", codbit);
	}
}
