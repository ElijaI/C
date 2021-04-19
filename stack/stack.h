#ifndef __STACK_H__
#define __STACK_H__
#include <stdlib.h>
#include <stdio.h>

typedef
struct liste_s {
	int elem;
	struct liste_s *next;
} liste_t;

void push(int x);
int pop(void);
#endif
