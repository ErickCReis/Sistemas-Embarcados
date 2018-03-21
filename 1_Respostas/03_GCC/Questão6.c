#include <stdio.h>

int main(int argc, char **argv){
	printf("Ola ");
	for (int i = 1; i < argc; ++i)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	printf("Número de entradas = %d \n", (argc-1));
}