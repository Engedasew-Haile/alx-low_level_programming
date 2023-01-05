#include "main.h"
#include <stdio.h>
/**
 * prime_found - found prime number
 * @x: dividend
 * @y: divider
 * Return: return 1 if the input is prime number, otherwise 0
 */
int prime_found(int x, int y)
{
	if (y != 1)
	{
	if (x == y)
	{
	return (1);
	}
	else if (y % x == 0 || y <= 1)
	{
	return (0);
	}
	else
	{
	return (prime_found(x + 1, y));
	}
	}
	return (0);
}
/**
 * is_prime_number - shows if is a prime #
 * @n: number
 *
 * Return: the input integer
 */
int is_prime_number(int n)
{
	int num = 2;

	return (prime_found(num, n));
}
