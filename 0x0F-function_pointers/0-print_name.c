#include "function_pointers.h"
#include <stdio.h>

/**
 * main - main entry points
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 * Return: this is a void function no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
