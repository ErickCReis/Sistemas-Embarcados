#include <stdio.h>
#include "num_caracs.h"

int Num_Caracs(char *string)
{
	int n = 0;
	for (int i = 0; string[i]; ++i)
	{
		n++;
	}
	return n;
}