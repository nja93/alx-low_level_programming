#include "lists.h"

/**
 * delete_dnodeint_at_index - Fn deletes the node @ given index in a lis
 * by Lorna
 * @head: Pointer to the address of the head node of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, else, -1
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position; /*position referes to current*/
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	position = *head;

	if (index == 0)
	{
		*head = position->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(position);
		return (1);
	}


	while (position != NULL && count < index)
	{
		position = position->next;
		count++;
	}
	if (position == NULL)
		return (-1);
	if (position->next != NULL)
		position->next->prev = position->prev;
	if (position->prev != NULL)
		position->prev->next = position->next;
	free(position);
	return (1);
}

