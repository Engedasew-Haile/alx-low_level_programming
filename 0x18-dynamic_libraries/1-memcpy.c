#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: copied
 * Return: pointer dest
 * @src: original
 * @n: limit
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *b = src;
	char *a = dest;

	while (n != 0)
	{
	*a++ = *b++;
	n--;
	}

	return (dest);
}
