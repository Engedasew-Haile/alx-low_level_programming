#include <stdio.h>

/**
 * main - Entery point
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 * Return: 0 always
 */
int main(void)
{
	int a[5];
	int n;
	int *p;

	a[2] = 98;
	p = &n;

	p[5] = 98;

	/* prints 98\n */

	printf("a[2] = %d", a[2]);
	return (0);
}
