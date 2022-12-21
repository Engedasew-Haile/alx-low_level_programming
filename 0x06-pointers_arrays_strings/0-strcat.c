#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: 0 always.
 */
char *_strcat(char *dest, char *src)
{
	int lngD, lngS;

	lngD = 0;
	lngS = 0;

	while (*(dest + lngD) != '\0')
		lngD++;

	while (*(src + lngS) != '\0' && lngD < 97)
	{
		*(dest + lngD) = *(src + lngS);
		lngD++;
		lngS++;
	}
	*(dest + lngD) = '\0';
	return (dest);
}