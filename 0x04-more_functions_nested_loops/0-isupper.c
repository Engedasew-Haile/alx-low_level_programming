#include <stdio.h>
#include "main.h"

/**
 * _isupper - uppercase letter
 * Return: 0 or 1
 * @c: char to check
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
