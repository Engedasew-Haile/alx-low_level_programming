#include <stdio.h>
#include <unistd.h>

/**
 *main - prints exactly "and that piece of art is useful"
 *- Dora Korpar, 2015-10-19",
 * followed by a new line, tobthe standard error.
 *Return: 1 always
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
