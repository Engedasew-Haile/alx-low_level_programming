#include "main.h"
#include <stdio.h>
/**
 * puts2 - print one char out of two of a strg
 * @str: The string containing char
 */
void puts2(char *str)
{
	int j, lng;

	for (j = 0; str[lng] != '\0'; j++)
	{
		;
	}
	for ( j = 0; j < lng; j = j + 2)
	{
		_putchar(str[lng]);
	}
	_putchar('\n');
}
