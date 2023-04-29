#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t
 * @h: listheader
 * Return: liste
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
