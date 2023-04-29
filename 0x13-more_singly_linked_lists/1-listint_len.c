#include "lists.h"
/**
 * listint_len - number of elements in a linked
 * @h: listheader
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + listint_len(h->next));
}
