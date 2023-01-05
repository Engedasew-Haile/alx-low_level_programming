#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: 1 -> identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
	return (1);
	}
	if ((*s2 == '*') && !*s1 && (*(s2 + 1) != '\0'))
	{
	return (0);
	}
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
