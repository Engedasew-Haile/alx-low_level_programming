#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: If big-endian - 0
 */

int get_endianness(void)
{
	int num = 1;
	char *end = (char *)&num;

	if (*end == 1)
		return (1);

	return (0);
}
