#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * Return: pointer s
 * @n: n byte
 * @b: hexadecimal numbers
 * @s: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
	*u++ = b;
	}
	return (s);
}
