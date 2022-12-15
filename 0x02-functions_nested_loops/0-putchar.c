#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always 
 */
int main(void)
{
	char *ch = "ALX SE School";

	for (ch = 0; ch <= 12; ch++)
	{
	putchar(*ch);
	}
	putchar("\n");

	return (0);
}
