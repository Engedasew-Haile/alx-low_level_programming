#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*
*/
int main(void)
{
	int ltr;
	
	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		ltr = tolower(ltr);
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
