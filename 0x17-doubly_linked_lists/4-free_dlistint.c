#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list
 * @head: pointer to the head of the list
 * by Lorna
 * Return: 0 nothing if successful
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
