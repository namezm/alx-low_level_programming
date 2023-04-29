#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint_end - new node at the end of a liste
 * @h: list
 * @n: int
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t)), *node;

	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	if (*h == NULL)
		*h = new_list;
	else
	{
		node = *h;
		while (node->next != NULL)
			node = node->next;
		node->next = new_list;
	}
	return (*h);
}
