#include <unistd.h>
/**
 * _putchar - writer 
 *
 * Return: -1
 */
int _putchar(char c)
{
	return (writr(1, &c, 1));
}
