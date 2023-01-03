#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * Return: pointer to the byte in s
 * @s: string
 * @accept: character to search, get from user
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
			if (*(accept + y) == s[x])
			{
			return (s + x);
			}
		if (*(accept + y) == s[x])
		{
		return (s + x);
		}
	}
	return (0);
}
