#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The char to print
 *
 * Return: Always 0.
 * On error, -1 is returned, and errno is set properly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
