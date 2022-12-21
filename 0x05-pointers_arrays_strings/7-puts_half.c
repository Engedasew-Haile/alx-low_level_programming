#include "main.h"
#include <stdio.h>
/**
 * puts_half - half of a strg
 * @str: string to be print
 * Return: sth
 */
void puts_half(char *str)
{
	int lng = 0, j;

	while (str[lng++] != '\0')
		lng++;

	if ((lng % 2) == 0)
	{
		lng = lng / 2;
	}
	else
	{
		lng = (lng + 1) / 2;
	}
	while (str[lng] != '\0')
	{
		j = str[lng];
		lng++;
		_putchar(str[j]);
	}
	_putchar('\n');
}
