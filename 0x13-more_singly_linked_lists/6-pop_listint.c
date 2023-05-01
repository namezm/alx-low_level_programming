#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @h: liste
 * Return: contente of a head liste
 */
int pop_listint(listint_t **h)
{
	int cp = 0;
	listint_t *o_head = *h;

	if (o_head == NULL)
		return (cp);
	cp = o_head->cp;
	*h = o_head->next;
	free(o_head);
	return (cp);
}
