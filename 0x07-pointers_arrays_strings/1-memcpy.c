#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: destinataion
 *@src: source
 *@n: bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *orig_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (orig_dest);
}
