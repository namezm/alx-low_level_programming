#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - verification
 * @h: list header
 * @s: string
 * Return: list
 */
list_t *add_node_end(list_t **h, const char *s)
{
	list_t *new_list = malloc(sizeof(list_t)), *list;

	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(s);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = strlen(s);
	new_list->next = NULL;
	if (*h == NULL)
		*h = new_list;
	else
	{
		list = *h;
		while (list->next != NULL)
			list = list->next;
		list->next = new_list;
	}
	return (*h);
}
