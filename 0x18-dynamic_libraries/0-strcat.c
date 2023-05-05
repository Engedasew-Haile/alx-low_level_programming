#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lng_1 = 0, lng_2 = 0;

	while (*(dest + lng_1) != '\0')
	lng_1++;
	while (*(src + lng_2) != '\0' && lng_1 < 97)
	{
		*(dest + lng_1) = *(src + lng_2);
		lng_1++;
		lng_2++;
	}
	*(dest + lng_1) = '\0';
	return (dest);
}
