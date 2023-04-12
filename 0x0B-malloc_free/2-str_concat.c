#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: char 1
 *@s2: char 2
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int  len2 = 0, i = 0;
	unsigned int  len1 = 0, j = 0;
	char *result;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			result[i] = s1[j];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			result[i] = s2[j];
			i++;
			j++;
		}
	}
	result[i] = '\0';
	return (result);
}
