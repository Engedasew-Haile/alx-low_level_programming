#include "main.h"
/**
 * reverse_array - prints reverse array
 * @a: array to be compared
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
        int start_point, swap, end;

        start_point = 0;
        end = n - 1;
        while (start_point < end)
	{
		swap = *(a + start_point);
		*(a + start_point) = *(a + end);
		*(a + end) = swap;
		start_point++;
		end--;
	}
}
