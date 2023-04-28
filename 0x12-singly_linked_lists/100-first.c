#include <stdio.h>
void __attribute__((constructor)) namezme(void);
/**
 * namezme - verification
 * by namezm
 * Return: nothing
 */
void namezme(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
