#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the listint_t linked list.
 * Return: the number of nodes in the list
 * fn can print lists with a loop
 * go through the list only once
 * If the function fail, exit  with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	int diff;
	
	while (head)
	{
		diff = head - head->next;
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head ->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head ->next->n);
			break;
		}
	}
	return (node);
}

