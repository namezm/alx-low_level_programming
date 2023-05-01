#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @h: liste
 * @index: i
 * Return: list
 */
int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *p_node = NULL, *nd = *h;

	while (nd != NULL)
	{
		if (index == 0)
		{
			if (p_node != NULL)
			{
				p_node->next = nd->next;
			}
			else
			{
				*h = nd->next;
			}
			free(nd);
			return (1);
		}
		p_node = p_node == NULL ? node : p_node->next;
		nd = nd->next;
		index--;
	}
	return (-1);
}
