#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void) /*will print lowercase */
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
	putchar (j);
	}
	putchar ('\n');
	return (0);
}
