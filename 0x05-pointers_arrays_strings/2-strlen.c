#include "main.h"
/**
 * _strlen - return lenght of string
 * @str: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t lng = 0;

	while (*str++)
		lng++;
	return (lng);
}
