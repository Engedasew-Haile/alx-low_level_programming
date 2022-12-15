#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */	
        void ft_putchar(char c) {write(STDOUT_FILENO, &C, 1); }

	void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
	ft_putchar(letter);
	letter++;
	}
}
	
	int main(void)
{
	ft_print_alphabet();
	return (0);
}
