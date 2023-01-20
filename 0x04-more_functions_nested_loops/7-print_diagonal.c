#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - n draws a diagonal line on the terminal
 * @n: lengrh of diagonal line
 * Return: void
 */
int _putchar(char c);

void print_diagonal(int n)
{
	int x, k2 = n;

	if (n < 1)
	{
		_putchar('\n');
	for (; k2 > 0; k2--)
	{
		for (x = n - k2; x > 0; x--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
