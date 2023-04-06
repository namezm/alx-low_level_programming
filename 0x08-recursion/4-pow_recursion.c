#include "main.h"
/**
 *_pow_recursion - value of x raised of y
 *@x: int
 *@y:int
 *Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
