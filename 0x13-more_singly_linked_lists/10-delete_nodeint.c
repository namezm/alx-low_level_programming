#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index
 *@h: liste
 *@index: i
 *Return: list
 */
int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *node = *h, *p_node = NULL;

	while (node != NULL)
	{
		if (index == 0)
		{
			if (p_node != NULL)
				p_node->next = node->next;
			else
				*h = node->next;
			free(node);
			return (1);
		}
		p_node = p_node == NULL ? node : p_node->next;
		node = node->next;
		index--;
	}
	return (-1);
}
