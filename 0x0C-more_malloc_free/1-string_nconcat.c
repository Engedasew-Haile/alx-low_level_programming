#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function with two strings
 * @s1: string one
 * @s2: string tw
 * @n: size
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int a, b, c, d;

	if (s1 == 0)
	{	
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
		for (a = 0; s1[a] != '\0'; a++)
		{
		;
		}
		for (b = 0; s2[b] != '\0'; b++)
		{
		;
		}
	}
	if (n > b)
	{
		k = malloc((a + b + 1) * sizeof(char));
	}
	else
		k = malloc((a + n + 1) * sizeof(char));
	if (k == 0)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		k[c] = s1[c];
	}
	for (d = 0; d < n && d < b; d++, c++)
	{
		k[c] = s2[d];
	}
	k[c] = '\0';
	return (k);
}
