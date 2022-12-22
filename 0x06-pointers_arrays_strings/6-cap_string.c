#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string
 * Return: String with all word
 * @s: analized string
 */
char *cap_string(char *s)
{
	int j, k;
	int x[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	j = 0;
	while (*(s + j) != '\0')
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			if (j == 0)
			{
				*(s + j) = *(s + j) - 32;
			}
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (x[k] == *(s + j - 1))
					{
						*(s + j) = *(s + j) - 32;
					}
				}
			}
		}
	j++;
	}
	return (s);
}
