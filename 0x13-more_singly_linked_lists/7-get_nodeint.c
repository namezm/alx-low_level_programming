#include "lists.h"
/**
 * get_nodeint_at_index - verification
 * @h: liste
 * @index: teg ind
 * Return: nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	if (index == 0)
		return (h);
	if (!h)
		return (NULL);

	return (get_nodeint_at_index(h->next, index - 1));
}
