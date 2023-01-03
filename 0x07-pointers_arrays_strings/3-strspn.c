#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * Return:  number of bytes in the initial segment of s
 * @accept: char of sth
 * @s: char arr
 */

unsigned int _strspn(char *s, char *accept)
{
	int ltr;
	int sth = 0;

	while (s[sth])
	{
		for (ltr = 0; accept[ltr]; ltr++)
		{
			if (accept[ltr] == s[sth])
			{
				break;
			}
		}
		if (!accept[ltr])
		{
			break;
		}
		sth++;
	}
	return (sth);
}
