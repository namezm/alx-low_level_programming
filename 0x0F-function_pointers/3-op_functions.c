#include "3-calc.h"
/**
 *op_add - add 2 number
 *@a: number 1
 *@b: number 2
 *Return: total
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - na9is
 *@a: number 1
 *@b: number 2
 *Return: total
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - mul 2 number
 *@a: number 1
 *@b: number 2
 *Return: total
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - div 2 number
 *@a: number 1
 *@b: number 2
 *Return: total
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
 *op_mod - mod 2 number
 *@a: number 1
 *@b: number 2
 *Return: total
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

