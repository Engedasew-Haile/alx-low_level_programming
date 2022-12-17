#include <stdio.h>
/**
 * main - print type
 * Return: 0 if exited properly, non-zero
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(float));
	printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Signed char: %d byte(s)\n", (unsigned long)sizeof(signed char));
	printf("long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	return (0);
}
