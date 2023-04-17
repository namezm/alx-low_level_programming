#include "dog.h"
#include <stdio.h>
/**
 *print_dog - information of a dog
 *@d: struct
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : 0.0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
