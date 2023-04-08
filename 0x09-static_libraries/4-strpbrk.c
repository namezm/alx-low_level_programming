#include "main.h"
/**
 *_strpbrk - locate the first occurence in a string
 *@s: string
 *@accept: locate
 *Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return ('\0');

}
