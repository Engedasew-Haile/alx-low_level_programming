#include "main.h"
/**
 * _puts - print a string next new line
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
