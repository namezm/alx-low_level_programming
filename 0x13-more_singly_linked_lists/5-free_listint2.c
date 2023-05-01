#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - listint_t list
 * @h: liste
 * Return: nothing
 */
void free_listint2(listint_t **h)
{
	listint_t *liste, *temp;

	if (h == NULL || *h == NULL)
		return;
	liste = *h;
	while (liste != NULL)
	{
		temp = liste;
		liste = liste->next;
		free(temp);
	}
	*h = NULL;
}
