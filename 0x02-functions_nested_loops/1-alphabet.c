#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */	
        
	void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (9);
	return (0);
}
