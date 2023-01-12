#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - fun creates an array
 * @min: to print add of memory
 * @max: to print size of memory
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i;
	int *k;

	if (min > max)
		return (NULL);
	k = malloc(sizeof(int) * (max - min + 1));
	if (k == 0)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		k[i] = min;
	return (k);
}
