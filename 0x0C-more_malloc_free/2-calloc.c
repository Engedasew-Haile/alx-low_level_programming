#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - fun that allocates memory
 * @nmemb: number
 * @size: size of
 * Return:0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	k = malloc(nmemb * size);
	tmp = k;
	if (k == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		k[a] = 0;
	return (tmp);
}
