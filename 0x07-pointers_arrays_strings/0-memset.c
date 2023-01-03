#include "main.h"
#include <stdio.h>

/**
* _memset -fills memory with a constant byte
* @s: pointer
* @b: hexadecimal number
* @n: n bytes
* Return: s
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
