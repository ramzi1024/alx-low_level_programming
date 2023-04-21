#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: argument
 * @b: argument
 * Return: addition of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: argument
 * @b: argument
 * Return: substraction of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: argument
 * @b: argument
 * Return: multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: argument
 * @b: argument
 * Return: division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
 
/**
 * op_mod - modulo 
 * @a: argumrnt
 * @b: argument
 * Return: modulo of two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("error\n");
	exit(100);
	}
	return (a % b);
}
