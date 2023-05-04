#include "main.h"
/**
 * flip_bits - number of bits to flip
 * @n: 1 int
 * @m: 2 int
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	unsigned int cp = 0;

	for (; j < 64; j++)
	{
		cp += (n & 1) ^ (m & 1);
		n >>= 1;
		m >>= 1;
	}
	return (cp);
}
