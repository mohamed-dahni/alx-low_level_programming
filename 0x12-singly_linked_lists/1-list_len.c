#include "lists.h"

/**
 * list_len - counts how many elements in a singly linked list
 * @h: the head of the singly linked list
 * Return: How many elements in a singly linked list
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (list_len(h->next) + 1);
}

