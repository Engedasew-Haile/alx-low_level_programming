#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints digits 0 - 9, not to 2&4
 * Return: void
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		a == '2' || a == '4' ? _putchar(++a) : _putchar(a);
	}
	_putchar('\n');
}
