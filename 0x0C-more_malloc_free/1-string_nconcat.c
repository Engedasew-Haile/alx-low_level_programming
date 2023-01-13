#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function with two strings
 * @s1: destination for concatnation
 * @s2: source, string
 * @n:size
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int count, count1, l1, l2;
	int sign = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (sign >= l2)
	{
		sign = l2;
		ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < l1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);
}
