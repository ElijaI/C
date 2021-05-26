#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {

	if(argc != 2) {
		printf("use: ./prog <URL des Servers>\n");
		exit(-1);
	}

	//char* hostname = argv[1];

	struct hostent* adressen = gethostbyname(argv[1]);

	if(adressen == NULL) {
		printf("Nicht gefunden\n");
		return -1;
	}

	for(int i = 0; adressen->h_addr_list[i] != NULL; i++) {
		printf("[%i]: %s\n", i, inet_ntoa(*((struct in_addr*) adressen->h_addr_list[i])));
	}




}
