#include "main.h"
/**
 * leet - encodes a string into 1337
 *@s: input string
 * return: the pointer to dest
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_lettets[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if(*(s + count) == low_letters[i] || *(s + count) == up_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;

	}

	return (s);
}

