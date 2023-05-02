#include "lists.h"
#include <stdlib.h>
/**
 *reverse_listint - reverses a liste
 *@h: liste
 *Return: nothing
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t  *nxts = NULL, *prev = NULL;

	while (*h != NULL)
	{
		nxts = (*h)->next;
		(*h)->next = prev;
		prev = *h;
		*h = nxts;
	}
	*h = prev;
	return (*h);
}
