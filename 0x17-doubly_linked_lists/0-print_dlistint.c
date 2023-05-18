#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * by Lorna
 * @h: A pointer to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
