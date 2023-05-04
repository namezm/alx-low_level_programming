#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 
 * @n: int
 * @i: i
 * Return: i
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int r;
	unsigned int l = 0;

	if (i > 63)
		return (-1);
	r = 1;
	for (; l < i; l++)
		r = r * 2;
	if ((*n >> i) & 1)
		*n -= r;
	return (1);
}
