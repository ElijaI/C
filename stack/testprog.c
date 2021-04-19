#include "stack.h"

int main(void) {
	push(5);
	push(7);
	printf("%i\n", pop());
	push(8);
	push(3);
	printf("%i\n", pop());
	push(1);
	printf("%i\n", pop());
	printf("%i\n", pop());
	printf("%i\n", pop());
}
