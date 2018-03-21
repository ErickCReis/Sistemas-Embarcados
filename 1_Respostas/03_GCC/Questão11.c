#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char const *argv[])
{
	int caracteres = 0;
	for (int i = 0; i < argc; ++i)
	{
		caracteres += Num_Caracs(argv[i]);
	}
	printf("Numero de caracteres: %d \n", caracteres);
	return 0;
}