#include "lists.h"
/**
 * sum_dlistint - fn that sums of all the data of a linked list.
 * by Lorna
 * @head: pointer to the head node of the linked list
 * Return: sum data in list or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int count;

	while (head != NULL)
	{
		count = head->n;
		head = head->next;
		sum += count;
	}
	return (sum);
}
