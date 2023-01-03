#include <stdio.h>
#include "main.h"

/**
 * _strchr - library provides a similar function
 * Return: char
 * @s: array
 * @c: char
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != 0)
	{
		if (s[x] == c)
			return (&s[x]);
		x++;
	}
	if (s[x] == c)
		return (&s[x]);

	return (0);
}
