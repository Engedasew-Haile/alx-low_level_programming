#include "main.h"
#include <unistd.h>

/*
 * _putchar - _putchar writes the character c
 * main - Entry point
 * _putchar(char c) - write char
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
