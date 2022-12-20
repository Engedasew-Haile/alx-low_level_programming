#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a strg
 * @s: string to be reserved
 */
void rev_string(char *s)
{
	int j = 0, lng = 0;
	char temp;

	while (s[j++])
		lng++;

	for (j = lng - 1; j >= lng / 2; j--)
	{
		temp= s[j];
		s[j] = s[lng - j - 1];
		s[lng - j - 1] = temp;
	}
}
