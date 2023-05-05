#include "main.h"
/**
 * _strncat - concatenate strings
 * Return: to dest
 * @dest: string with concatenation
 * @n: size of second string
 * @src: string to be concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int lngd, lngs;

	lngd = 0;
	lngs = 0;

	while (*(dest + lngd) != '\0')
		lngd++;
	while (*(src + lngs) != '\0' && lngd < 97 && lngs < n)
	{
		*(dest + lngd) = *(src + lngs);
		lngd++;
		lngs++;
	}
	*(dest + lngd) =  '\0';
	return (dest);
}
