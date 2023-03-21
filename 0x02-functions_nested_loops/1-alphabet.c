#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch='a'; <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
