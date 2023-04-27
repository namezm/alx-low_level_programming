#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - verification
 * @h: listheader
 * @s: string
 * Return: list
 */
list_t *add_node(list_t **h, const char *s)
{
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(s);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = strlen(new_list->str);
	new_list->next = *h;
	*h = new_list;
	return (new_list);
}
