#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t
 * @h: liste
 * Return: nothing
 */
void free_listint(listint_t *h)
{
	listint_t *liste;

	if (h == NULL)
		return;
	if (h->next != NULL)
	{
		liste = h->next;
		free(h);
		free_listint(liste);
		return;
	}
	free(h);
}
