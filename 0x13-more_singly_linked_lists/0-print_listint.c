#include "lists.h"
#include <stdio.h>
/**
 * print_listint - all the elements of a lists
 * @h: liste
 * Return: liste size
 */
size_t print_listint(const listint_t *h)
{
	size_t cp = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cp++;
		h = h->next;
	}

	return (cp);
}
