#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 0;
	char y = 'a';

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
		putchar('\n');

	return (0);
}
