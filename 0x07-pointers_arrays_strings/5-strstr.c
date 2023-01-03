#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * Return: 0
 * @haystack: char array
 * @needle: char array (keyword)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *duplicate = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (duplicate);
		}
		haystack++;
	}
	return (0);
}
