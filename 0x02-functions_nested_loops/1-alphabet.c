#include <stdio.h>
/**
 * print_alphabet -> prints the lowercase alphabets
 */

void print_alphabet(void) /*will print lowercase */
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar (j);
	}
	putchar ('\n');
}
