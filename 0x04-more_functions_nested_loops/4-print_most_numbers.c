#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints digits 0 - 9, not to 2&4
 * Return: void
 */
void print_most_numbers(void)
{
	char a;

	for (a = 0; a < 9; a++)
	{
		a == 'a' || a == '4' ? _putchar(++a) : _putchar(a);
	}
	_putchar('\n');
}
