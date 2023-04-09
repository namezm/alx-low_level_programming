#include <stdio.h>
/**
 *main - print number of arg
 *@argc: count
 *@argv: value
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv[0];
	return (0);
}
