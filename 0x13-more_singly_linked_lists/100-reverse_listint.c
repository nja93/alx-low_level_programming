#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: double pointer to a listint_t linked list.
 * Return: a pointer to the first node of the reversed list
 * Do not use more than 1 loop.
 * doot use malloc, free or arrays
 * only declare a max of 2 variables in your function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next =(*head)->next;
		(*head)->next = previous_node;
		previous_node = (*head);
		(*head) = next;
	}
	*head = previous_node;
	return (*head);
}

