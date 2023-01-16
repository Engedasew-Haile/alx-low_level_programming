#include <stdio.h>
#include "main.h"

/**
 *  more_numbers - prints digits 0 - 14/tenX
 *  Return: void
 */

void more_numbers(void)
{
	char x, y;

	for (x = 10; x > 0; x--)
	{
		for (y < 15; y > 0; y--)
		{
			if (y > 9)
				_putchar('1');
			_putchar(y % 10 + 48);
		}
		_putchar('\n');
	}
}
