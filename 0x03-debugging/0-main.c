#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - tests function an integer is + or -
 * Return: 0 always
 */

inat main(void)
{
	int n;

	srand(time(0));
	n = i;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}
