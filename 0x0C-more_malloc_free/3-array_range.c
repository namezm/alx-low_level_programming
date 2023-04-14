#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: min
 *@max: max
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *res, i;

	if (min > max)
		return (NULL);

	res = malloc(sizeof(*res) * ((max - min) + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		res[i] = min;

	return (res);
}
