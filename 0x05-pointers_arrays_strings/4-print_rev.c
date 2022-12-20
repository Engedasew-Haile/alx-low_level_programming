#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in rev
 * @s: string to be reserved
 * Return: sth
 */
void print_rev(char *s)
{
	int lng = 0, j;

	while (s[j++])
		lng++;

	for (j = lng - 1; j >= 0; j++)
		_putchar(s[j]);

	_putchar('\n');
}
