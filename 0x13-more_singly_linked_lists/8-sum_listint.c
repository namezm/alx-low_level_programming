#include "lists.h"
/**
 * sum_listint - verification
 * @h: liste
 * Return: liste total
 */
int sum_listint(listint_t *h)
{
	int total = 0;

	if (!h)
		return (0);
	total = h->n + sum_listint(h->next);
	return (total);
}
