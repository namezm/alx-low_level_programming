#include "main.h"
/**
 *print_chessboard - chessborad with C
 *@a: pointer a
 *Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
