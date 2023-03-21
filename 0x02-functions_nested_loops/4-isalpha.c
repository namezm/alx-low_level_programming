#include "main.h"

/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Returns 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	int lower = 0;

		if (isalpha(c))
			lower = 1;

	return (lower);
}
