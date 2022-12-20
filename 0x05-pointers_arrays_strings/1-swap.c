#include "main.h"
/**
 * swap_int - swap the value of int a&b
 * @a: 1st int to ...
 * @b: 2nd int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	 x = *a;
	*a = *b;
	*b = x;
}
