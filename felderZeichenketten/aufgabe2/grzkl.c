#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int i;
	char text[100];

	printf("Geben Sie einen Text ein: ");
	scanf(" %s", text);

	printf("Text in Kleinbuchstaben: ");

	for (i = 0; i < strlen(text); i = i + 1) {
		printf("%c", tolower(text[i]));
	}

	printf("\n");

	return(0);
}
