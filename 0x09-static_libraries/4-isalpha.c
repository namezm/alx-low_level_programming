#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	int lower = 0;

		if (isalpha(c))
			lower = 1;

	return (lower);
}
