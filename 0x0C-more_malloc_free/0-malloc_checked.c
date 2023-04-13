#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using
 *@b: int
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *res;

	res = malloc(b);
	if (res == NULL)
		exit (98);
	return (res);
}
