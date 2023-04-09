#include <stdio.h>
/**
 *main - multiplication 2 numbers
 *@argc: count
 *@argv: number
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
