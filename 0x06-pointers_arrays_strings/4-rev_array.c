#include "main.h"
/**
 * reverse_array - prints reverse array
 * @a: array to be compared
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int swap, start, end;

	start = 0;
	end = n -1;
	while (start < and)
	{
		swap = *(a +start);
		*(a + start) = *(a + end);
		*(a + end) = swap;
		start++;
		end--;
	}
}
