#include "lists.h"

/**
 * add_node_end - add a node to the end of a singly linked list
 * @head: the head of the singly linked list
 * @str: the value of the node
 * Return: the address of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *aux = *head;

	if (head == NULL)
		return (0);

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head != NULL)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	} else
	{
		*head = new;
	}


	return (new);
}
