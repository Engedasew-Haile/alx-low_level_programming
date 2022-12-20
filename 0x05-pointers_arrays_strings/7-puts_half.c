#include "main.h"
#include <stdio.h>
/**
 * puts_half - half of a strg
 * @str: string to be print
 * Return: sth
 */
void puts_half(char *str)
{
	int i = 0, lng = 0, j;

	while (str[i++])
		lng++;

	if ((lng % 2) == 0)
		j = lng / 2;

	else 
		j = (lng + 1) / 2;

	for (i = j; i < lng; i++)
		_putchar(str[i]);
	_putchar('\n');
}
