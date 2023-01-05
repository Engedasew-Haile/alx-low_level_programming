#include "main.h"
#include <stdio.h>
/**
 * _findsqr - finds the square
 * @answer: answer
 * @objetive: objetive
 * Return: square root or -1
 */
int _findsqr(int objetive, int answer)
{
	int r = answer * answer;

	if (r < objetive && r != objetive)
	{
	return (_findsqr(objetive, answer + 1));
	}
	else if (r > objetive)
	{
	return (-1);
	}
	else
	{
	return (answer);
	}
}

/**
 * _sqrt_recursion - square root of#
 * @n: num
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return (_findsqr(n, 1));
	}
}
