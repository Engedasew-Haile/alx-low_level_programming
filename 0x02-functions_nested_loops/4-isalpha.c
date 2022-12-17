#include <stdio.h>
/**
 * _isalpha - a fun that check for alph char
 * @c: single letter intake
 * Return: 1 if c is a loer or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c <= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
