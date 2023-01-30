#include "3-calc.h"

/*
 * op_add - Description this function adds two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function adds two numbers
 * Return: return the result of the add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/*
 * op_sub - this function sub two numbers
 * @a:the first number
 *
 * @b:the second number
 * Description: this function sub two numbers)
 * Return: return the result of the sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/*
 * op_mul - this function multiply two numbers
 * @a:the first number
 * @b:the second number
 * Description: this function multiply two number
 * Return: return the result of the multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/*
 * op_div - this function divide two numbers
 * @a:the first number
 * @b:the second number
 * Description: this function divide two numbers
 * Return: return the result of the divide
 */

inr op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/*
 * op_mod - this function calcualte the module
 * @a:the first number
 * @b:the second number
 * Description: this function calculate the module)
 * Return: return the result of the module
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
