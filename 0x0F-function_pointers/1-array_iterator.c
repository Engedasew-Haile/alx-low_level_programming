#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 * print_elem - prints an integer
 * @elem: the integer to print
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
		action(*(array + i));
	}
}
