#include "main.h"
#include <stdio.h>
/**
 * puts2 - print one char out of two of a strg
 * @str: The string containing char
 */
void puts2(char *str)
{
	int j, lng = 0;

	while (str[j++])
		lng++;

	for (j = 0; j < lng; j+= 2)
		_putchar(str[j]);
	_putchar('\n');
}
