#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - new node at a given position
 * @h: liste
 * @index: tag ind
 * @n: i
 * Return: liste
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
	listint_t *liste, *prev_liste = NULL, *list = *h;

	do {
		if (!list && index > 0)
			return (NULL);
		if (index == 0)
		{
			liste = malloc(sizeof(listint_t));
			if (liste == NULL)
				return (NULL);
			liste->n = n;
			liste->next = list;
			if (!prev_liste)
				prev_liste->next = liste;
			else
				*h = liste;
			return (liste);
		}
		prev_liste = prev_liste == NULL ? list : prev_liste->next;
		list = list->next;
		index--;
	} while (1);
}
