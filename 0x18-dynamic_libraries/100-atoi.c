#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an int
 * @s: string to convert
 * Return: the converted strg
 */
int _atoi(char *s)
{
	short boolean;
	int j, min, result;

	j = min = result = boolean = 0;
	min = -1;

	while (s[j] != '\0')
	{
		if (s[j] == '-')
			min *= -1;

		if (s[j] >= '0' && s[j] <= '9')
		{
			result *= 10;
			result -= (s[j] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		j++;
	}
	result *= min;
	return (result);
}
