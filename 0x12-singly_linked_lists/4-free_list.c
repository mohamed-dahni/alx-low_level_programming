#include "lists.h"

/**
 * free_list - frees a list from memory
 * @head: head of the singly linked list
 * Return: Void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return (NULL);

	free_list(head->next);

	free(head->str);
	free(head);
}

