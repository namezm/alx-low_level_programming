#include "main.h"
#include <stdlib.h>
/**
 *_strcpy - concat str to str2
 *@new_str: char
 *@str: char
 *Return: str final
 */
char *_strcpy(char *new_str, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}


/**
 *_strdup - allocated space in memory
 *@str: char
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int lenght;

	lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght])
		lenght = lenght + 1;

	new_str = (char *) malloc(lenght + 1);
	if (new_str == NULL)
		return (NULL);

	_strcpy(new_str, str);
	return (new_str);
}
