#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
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
