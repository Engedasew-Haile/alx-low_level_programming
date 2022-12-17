#include <stdio.h>
/**
 * print_alphabet_x10 ->  prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
