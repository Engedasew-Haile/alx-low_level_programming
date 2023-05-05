#include "main.h"
/**
 * _strncpy - concatenate strings, defin the size of second string
 * Return: 0
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		*(dest + k) = *(src + k);
	for ( ; k < n; k++)
		*(dest + k) = '\0';

	return (dest);
}
