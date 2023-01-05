#include "main.h"
/**
 * factorial - factorial unmber
 * @n: number
 * Return: factorial of base
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
	return (n * factorial(n - 1));
	}
}
