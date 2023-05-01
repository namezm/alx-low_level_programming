#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @h: liste
 * Return: contente of a liste
 */
int pop_listint(listint_t **h)
{
	listint_t *o_head = *h;
	int z = 0;

	if (o_head == NULL)
		return (z);
	z = o_head->n;
	*h = o_head->next;
	free(o_head);
	return (z);
}
