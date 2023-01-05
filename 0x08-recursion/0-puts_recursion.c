#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string trhough recursion
 * @s: char
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (!*s)
	{
	_putchar('\n');
	return;
	}
}
