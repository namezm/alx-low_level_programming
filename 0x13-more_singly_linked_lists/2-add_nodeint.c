#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of list
 * @h: listheader
 * @n: int
 * Return: liste
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new_liste = malloc(sizeof(listint_t));

	if (new_liste == NULL)
		return (NULL);
	new_liste->n = n;
	new_liste->next = *h;
	*h = new_liste;
	return (new_liste);
}
