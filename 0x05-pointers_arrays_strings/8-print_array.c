#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times
 * @a: the pointer to the elt
 * @n: times to print elt
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
