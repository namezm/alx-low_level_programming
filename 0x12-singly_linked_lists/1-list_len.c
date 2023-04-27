#include "lists.h"
/**
 * list_len - verification
 * @h: listheader
 * Return: liste tal
 */
size_t list_len(const list_t *h)
{
	size_t cp = 0;

	while (h != NULL)
	{
		cp++;
		h = h->next;
	}
	return (cp);
}
