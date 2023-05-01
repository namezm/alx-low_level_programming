#include "lists.h"
#include <stdio.h>
/**
 * print_listint - all the elements of a lists
 * @h: liste
 * Return: liste size
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
