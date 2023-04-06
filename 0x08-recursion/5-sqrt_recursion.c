#include "main.h"
/*
 *_sqrt_recursion - calculate square of a number
 *@n: number int
 *Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	int x = _sqrt_recursion(n / 2) * 2;

	if (x * x == n)
		return (n);
	else if (x * x > n)
		return (-1);
	else
		return (_sqrt_recursion((n / x + x) / 2));
}
