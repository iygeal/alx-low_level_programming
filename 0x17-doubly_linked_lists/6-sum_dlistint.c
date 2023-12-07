#include "lists.h"
/**
 * sum_dlistint - Sums up all the data in a doubly linked list
 * @head: Pointer to the first element in the list
 * Return: Returns the sum of the values in the list, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int list_sum = 0;

	while (head != NULL)
	{
		list_sum += head->n;
		head = head->next;
	}
	return (list_sum);
}
