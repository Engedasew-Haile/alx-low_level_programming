#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, tot = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			tot += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", tot);
	return (0);
}
