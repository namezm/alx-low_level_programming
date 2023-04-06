#include "main.h"
/**
 *_sqrt_recursion - calculate natural of a number
 *@n: int
 *Retur: natural square number
 */ 
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (get_sqrt(1, n));
}
/**
 *get_sqrt - find the natural square
 *@x: int
 *@y: int
 *Return: the natural square
 */ 
int get_sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (get_sqrt(x + 1, y));
}
