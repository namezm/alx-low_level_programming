#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strdup - allocated space in memory
 *@str: char
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = (char *) malloc(strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);
	return (new_str);
}
