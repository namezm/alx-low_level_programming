#include "main.h"
/**
 *factorial - factorial of a number
 *@n: int number
 *Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
