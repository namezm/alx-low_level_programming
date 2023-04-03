#include "main.h"
/**
 *_strspn - gets the lenght of a prefix substring
 *@s: string
 *@accept: char
 *Return: numbers of the byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; j++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			return (i);
		}
	}	

	return (i);
}

