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
	int i = 0;

	while (src[index] != '\0')
	{
		index++;
	}
	while (i < index && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i <= index)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
