#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: int to edit
 * @i: i
 * Return: i
 */
int set_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int r;
	unsigned int l = 0;

	if (i > 63 || (*n >> i) & 1)
		return (-1);
	r = 1;
	for (; l < i; l++)
		r = r * 2;
	*n += r;
	return (1);
}
