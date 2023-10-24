#include "lists.h"
/**
 * pop_listint - Function that deletes first node
 * @head: The pointer to the first node in the linked list
 * Return: Returns the data part of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int value;

	if (*head == NULL)
		return (0);
	else if (*head != NULL)
	{
		p = *head;
		value = (*head)->n;
		*head = (*head)->next;
		free(p);
	}
	return (value);
}
