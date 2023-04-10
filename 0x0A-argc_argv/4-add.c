#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - add positive number
 *@argc: count
 *@argv: value
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int i, j, some = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		some = some + atoi(argv[i]);
	}
	printf("%d\n", some);
	return (0);
}
