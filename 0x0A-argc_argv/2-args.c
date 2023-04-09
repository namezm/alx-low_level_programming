#include <stdio.h>
/**
 *main - print all arg
 *@argc: count
 *@argv: value
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
