#include "main.h"
/**
 * leet - change vowl to #
 * @s: analized string
 * Return: String with all vowel
 */
char *leet(char *s)
{
	char x[] = "aeotlAEOTL";
	char y[] = "4307143071";
	int j = 0;
	int k;

	while (*(s + j) != '\0')
	{
			for (k = 0; k <= 9; k++)
			{
				if (*(s + j) == x[k])
				{
					(*(s + j) = y[k]);
				}
			}
			j++;
	}
	return (s);
}
