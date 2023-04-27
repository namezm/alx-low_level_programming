#include "lists.h"
#include <stdlib.h>

/**
 * free_list - verification
 * @h: listheader
 * Return: nothing
 */
void free_list(list_t *h)
{
	list_t *list;

	while (h != NULL)
	{
		list = h->next;
		free(h->str);
		free(h);
		h = list;
	}
}
