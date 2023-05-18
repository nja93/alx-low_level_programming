#include "lists.h"
/**
 * add_dnodeint - function tht adds node at the beginning
 * by Lorna
 * @n: element to be added
 *
 * Return: address of the new element or NULL if unsuccessful
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));  /*allocate memory for new node*/

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
