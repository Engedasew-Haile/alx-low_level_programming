#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals...
 * @a: array
 * @size: size sth
 * Return: ve not
 */

void print_diagsums(int *a, int size)
{
	int num1 = 0;
	int num2 = 0;
	int x = 0;

	while (x < size)
	{
		num1 += a[x * (size + 1)];
		num2 += a[(x + 1) * (size - 1)];
		x++;
	}
	printf("%d, ", num1);
	printf("%d", num2);
	printf("\n");
}
