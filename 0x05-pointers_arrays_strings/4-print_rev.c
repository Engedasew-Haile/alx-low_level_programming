#include "main.h"
/**
 * print_rev - print a string in rev
 * @s: string to be reserved
 */
void print_rev(char *s)
{
	int lng = 0;
	int j;

	while (s[j++])
		lng++;

	for (j = lng - 1; j >= 0 j--)
		_putchar(s[j]);

	_putchar('\n');
}
