#include <stdio.h>
/**
 * main - entry point
 *
 * print_alphabet(void) -> print the lowercase alphabets
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
	putchar (j);
	}
	putchar ('\n');
}
