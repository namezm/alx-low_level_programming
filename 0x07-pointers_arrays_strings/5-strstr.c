#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: pointer to the beginning of the located substr
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return ('\0');
}
