#include "main.h"
/**
 *_strchr - locate a char in a string
 *@s: string
 *@c: char founder
 *Return: pointer if found or NULL if not
 */
char *_strchr(char  *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

	return ('\0');
}
