#include "lists.h"
/**
 * sum_listint - Function that sums all data in a singly linked list
 * @head: Pointer to the first node on the list
 * Return: Returns the sum if success or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
