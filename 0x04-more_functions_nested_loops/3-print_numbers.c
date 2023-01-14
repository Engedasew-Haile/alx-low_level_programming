#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints digits 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	char x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
