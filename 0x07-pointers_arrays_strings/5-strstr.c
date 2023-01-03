#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: return 0
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
