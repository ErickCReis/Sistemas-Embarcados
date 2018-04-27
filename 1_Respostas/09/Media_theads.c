
#include <stdio.h>
#include <stdlib.h> //rand() e srand() estao aqui
#include <pthread.h>
#include <unistd.h>
#include <time.h>

struct dados
{
	long int *vec;
	double m;
};

void *media(void *valores)
{
	struct dados *p = (struct dados *) valores;
	p->m = 0;
	for (int i = 0; i < 12500; ++i)
	{
		p->m += p->vec[i];
	}
	p->m = p->m/12500;
}

main()
{
	long int v[50000];
	double media_final;
	srand(time(NULL));
	int i;

	for (i = 0; i < 50000; ++i)
	{
		v[i] = rand() % 1000;
		if(i<200)
		{
			printf("Valor = %ld\n",v[i]);
		}
	}

	pthread_t thread_id[4];
	struct dados vetor[4];

	for (i = 0; i < 4; ++i)
	{
		vetor[i].vec = &v[12500*i];
		pthread_create(&thread_id[i], NULL, &media, &vetor[i]);
	}

	for (i = 0; i < 4; ++i)
	{
		pthread_join(&thread_id[i], NULL);
	}

	for (i = 0; i < 4; ++i)
	{
		media_final += vetor[i].m;
	}
	media_final = media_final/4;

	printf("%.2lf\n", media);
	return 0;
}