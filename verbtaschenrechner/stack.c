#include "stack.h"

static liste_t *listenkopf = NULL;

void push(int x) {
	if (listenkopf == NULL) {
		listenkopf = (liste_t*)malloc(sizeof(liste_t));
		if (listenkopf == NULL) {
			printf("Fehler: Kein Speicher zugewiesen\n");
			exit(1);
		}
		(*listenkopf).elem = x;
		(*listenkopf).next = NULL;
	} else {
		liste_t* new = malloc(sizeof(liste_t));
		new->next = listenkopf;
		new->elem = x;
		listenkopf = new;
	}
}

int pop(void) {
	if (listenkopf != NULL) {
		liste_t* next = listenkopf->next;
		int wert = listenkopf->elem;
		free(listenkopf);
		listenkopf = next;
		return wert;
	} else {
		printf("Fehler: Keine Elemente vorhanden\n");
		exit(1);
	}
}
