#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - a fun that ptints the last digit #
 * @nld: numbrs last digiy result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
