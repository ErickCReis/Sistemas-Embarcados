#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char const *argv[])
{
	int caracteres = 0;
	for (int i = 0; i < argc; ++i)
	{
		caracteres = Num_Caracs(argv[i]);
		printf("Arqumento: %s / Numero de caracteres: %d \n", argv[i], caracteres);		
	}

	return 0;
}