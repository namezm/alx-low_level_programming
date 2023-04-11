#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - initializes it with a specific char
 *@size: number
 *@c: char
 *Return: 0 if size = 0 or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(size * sizeof(c));

	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
