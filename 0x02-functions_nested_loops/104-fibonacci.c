#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Return: 0 always
 */
int main(void)
{
	unsigned long int r1 = 0, k1 = 1, r2 = 0, k2 = 2;
	unsigned long int d1, d2, d3;
	int count;

	printf("%lu, %lu, ", k1, k2);
	for (count = 2; count < 98; count++)
	{
		if (k1 + k2 > LARGEST || r2 > 0 || r1 > 0)
		{
			d1 = (k1 + k2) / LARGEST;
			d2 = (k1 + k2) % LARGEST;
			d3 = r1 + r2 + d1;
			r1 = r2, r2 = d3;
			k1 = k2, k2 = d2;
			printf("%lu%010lu", r2, k2);
		}
		else
		{
			d2 = k1 + k2;
			k1 = k2, k2 = d2;
			printf("%lu", k2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
