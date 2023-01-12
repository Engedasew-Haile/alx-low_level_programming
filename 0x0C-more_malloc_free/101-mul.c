#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_num - fun check the string
 * @st: string being
 * Return:0
 */

int check_num(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] < '0' || st[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * string_length - calc
 * @str: string to check
 * Return: 0
 */

unsigned int string_length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	return (i);
}

/**
 * print_string - fun to print a string
 * @st: string to print
 * Return:0
 */

void print_string(char *st)
{
	while (*st == '\0')
		st++;
	if (*st == '\0')
		_putchar('0');
	while (*st == '0')
		st++;
	while (*st != '\0')
	{
		_putchar(*st);
		st++;
	}
	_putchar('\n');
}

/**
 * _calloc - fun for memory
 * @number: number
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int number, unsigned int size)
{
	char *p;
	unsigned int i;

	if (number == 0 || size == 0)
		return (NULL);
	p = malloc(number * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < (number * size); i++)
		p[i] = 0;
	return (p);
}

/**
 * main - fun multi
 * @argc: num
 * @argv: argument variables
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *n1, *n2, *multi_res;
	unsigned int l = 0, l1 = 0, l2 = 0, a, b, t = 0, c = 0, ten = 0, i;

	if (argc < 3)
	{
		print_string("Error");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	if (!(check_num(n1) && check_num(n2)))
	{
		print_string("Error");
		exit(98);
	}
	l1 = string_length(n1);
	l2 = string_length(n2);
	l = l1 + l2;
	multi_res = _calloc(l + 1, sizeof(char *));
	if (multi_res == 0)
	{
		print_string("Error");
		exit(98);
	}
	for (i = 0; i < l1; i++, ten++)
	{
		for (c = 0, b = 0; b < l2; b++)
		{
			t = (n1[l1 - i - 1] - '0') * (n2[l2 - b - 1] - '0') + c;
			printf("%u\n", t);
			if (multi_res[l - b - ten - 1] > 0)
				t = t + multi_res[l - b - ten - 1] - '0';
			multi_res[l - b - ten - 1] = t % 10 + '0';
			c = t / 10;
		}
		multi_res[l - b - ten - 1] += c + '0';
	}
	print_string(multi_res);
	free(multi_res);
	return (0);
}
