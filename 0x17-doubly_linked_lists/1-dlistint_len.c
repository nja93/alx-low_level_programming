#include "lists.h"

/**
 *dlistint_len - function that returns the number of elements in a linked list
 * @h: poineter to the head of the list
 * ny Lorna
 * Return: No. of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
