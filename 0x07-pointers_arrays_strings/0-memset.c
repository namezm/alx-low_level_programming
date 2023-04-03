#include "main.h"
/**
 *_memst: fills memory with a constant byte,
 *@s: memory area
 *@b: constant byte
 *@n: bytes filled
 * Return: Returns a pointer to the memory area s.
 */
char *_memst(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
