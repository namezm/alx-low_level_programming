#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - Singly linked lists
 * @str: string
 * @len: cp
 * @next: points to node
 *
 * Description: Singly linked lists
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);

#endif
