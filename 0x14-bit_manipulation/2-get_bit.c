#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: int
 * @i: i
 * Return: i
 */
int get_bit(unsigned long int n, unsigned int i)
{
	if (i == 0)
		return (n & 1);
	if (i > 63)
		return (-1);
	return (get_bit(n >> 1, i - 1));
}
