#include "main.h"
/**
 *_strchr - locate a char in a string
 *@s: string
 *@c: char founder
 *Return: pointer if found or NULL if not
 */
char *_strchr(char  *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
