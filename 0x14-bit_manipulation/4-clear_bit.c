#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: If an error occurs - -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
