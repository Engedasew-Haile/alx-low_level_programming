#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in rev
 * @s: string to be reserved
 * Return: sth
 */
void print_rev(char *s)
{
	int lng = 0;

	while (s[lng] != 0)
	{
		lng++;
	}
	while (lng > 0)
	{
		lng--;
		_putchar(s[lng]);
	}

	_putchar('\n');
}
