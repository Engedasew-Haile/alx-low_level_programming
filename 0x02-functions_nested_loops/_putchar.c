#include <stdio.h>

/**
* _putchar - writers th char
* 
* Return: on 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
