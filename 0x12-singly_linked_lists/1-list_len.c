#include <stdio.h>
#include "lists.h"

/**
* list_len - lenght of list
* @h: the first node
* Return: elements number
*/

size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
