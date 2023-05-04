#include "main.h"
/**
 * binary_to_uint - converts  bon to int
 * @b: bin str
 * Return: int;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cp = 0, r = 1, m = 0;

	if (b == NULL)
		return (m);
	while (b[cp] != '\0')
		cp++;
	if (cp == 0)
		return (m);
	while (cp > 0)
	{
		cp--;
		if (b[cp] == '1')
			m += r;
		else if (b[cp] != '0')
			return (0);
		r *= 2;
	}
	return (m);
}
