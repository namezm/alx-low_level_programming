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
	
	unsigned int  len2 = strlen(s2);
	unsigned int  len1 = strlen(s1);
	
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	char *result;

	result = (char *) malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);

	return (result);
}
