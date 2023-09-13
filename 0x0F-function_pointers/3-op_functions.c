#include "3-calc.h"

/**
 * op_add - a function that add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - a function that subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - a function that multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - a function that divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result of division of a by b
 */
int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - a function that find the reminder of division
 * @a: first number
 * @b: second number
 *
 * Return: the reminder of division of a by b
 */
int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
