#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at nth index
 * @head: pointer to the head of the node
 *  by Lorna
 *  @index: index of next node
 *  Return: Null if node does not exist
 *
 */
 
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}

