#include <stdio.h>

int main(void)
{
int a[5];
int n;
int *p;

a[2] = 98;
p = &n;
/**
 * main- Entrey point
 * Remember: below
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - you are not allowed to code anything else than this line of code
 * - only one statement
 * Return: 0 always
 */
p[5] = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d", a[2]);
return (0);
}
