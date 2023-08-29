#include "lists"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the head of the list
 * Return: number of element printed
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	for (; h != NULL; h = h->next)
	{
		_putchar(h->n);
		len++;
	}

	return (len);
}

