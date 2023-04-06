#include "main.h"
/**
 *is_prime_help - helf first function
 *@n: int
 *@i: int
 *Return: is prime or not
 */ 
int is_prime_help(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (0);
		else
			return is_prime_help(n, i - 1);
	}
}
/**
 *is_prime_number - is a prime number
 *@n: int
 *Return: is a prime number or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return is_prime_help(n, n - 1);
}
