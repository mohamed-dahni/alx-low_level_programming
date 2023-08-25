#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a singly linked list and returns the number of nodes
 * @h: the head of the singly linked list
 * Return: Number of nodes
 */
size_t print_list(list_t *h)
{
  if (h == NULL)
    return (0)

  if (h->str == NULL)
    printf("[0] (nil)");
  else
    printf("[%d] %s\n", h->len, h->str);

  return (print_list(h->next) + 1);
}

