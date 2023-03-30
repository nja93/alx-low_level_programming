#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a nod at the beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 *
 * Return: NULL if unsuccessful. Address of the new element if successful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	int index = 0;

	while (str[index])
		index++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
