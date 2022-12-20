#include "main.h"
/**
 * _strcpy - Copies a string pointed to by @src
 * @dest: copy the string to
 * @src: the source string to copy
 * Return: to  the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != 0)
	{
		index++;
	}
	while (index > 0)
	{
		index--;
		_putchar(src[index]);
	}
	_putchar('\n');
	return (dest);
}
