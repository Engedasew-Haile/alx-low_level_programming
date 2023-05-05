#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letter
 * @c: char to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	return (c > 64 && c < 91 ? 1 : 0);
}
