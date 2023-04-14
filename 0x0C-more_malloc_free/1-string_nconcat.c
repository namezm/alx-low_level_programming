#include "main.h"
#include<stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: res
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1, len2, lres, i;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	lres = len1 + n;
	res = malloc(lres + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < lres; i++)
	{
		if (i < len1)
			res[i] = s1[i];
		else
			res[i] = s2[i - len1];
	}

	res[i] = '\0';
	return (res);

}
