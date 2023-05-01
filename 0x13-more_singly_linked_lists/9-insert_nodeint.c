#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - verification
 * @h: liste
 * @index: targ i
 * @n: i
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
	listint_t *n_node, *p_node = NULL, *nd = *h;

	do {
		if (nd == NULL && index > 0)
			return (NULL);
		if (index == 0)
		{
			n_node = malloc(sizeof(listint_t));
			if (n_node == NULL)
				return (NULL);
			n_node->n = n;
			n_node->next = nd;
			if (p_node != NULL)
				p_node->next = n_node;
			else
				*h = n_node;
			return (n_node);
		}
		p_node = p_node == NULL ? nd : p_node->next;
		nd = nd->next;
		index--;
	} while (1);
}
