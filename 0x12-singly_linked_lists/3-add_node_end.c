#include "lists.h"

/**
 * add_node - add a node to the begenning of a singly linked list
 * @head: the head of the singly linked list
 * @str: the value of the node
 * Return: the address of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *aux = *head;

	if (head == NULL || *head == NULL)
		return (0);

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;

    while (aux->next != NULL)
        aux = aux->next;

    aux->next = new;

	return (new);
}
