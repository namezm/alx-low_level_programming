#include "main.h"

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

		if (islower(c))
			lower = 1;

	return (lower);
}
