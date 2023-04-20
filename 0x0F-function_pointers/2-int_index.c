#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array
 *@size: size
 *@cmp: pointer
 *Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	}

	return (-1);
}
