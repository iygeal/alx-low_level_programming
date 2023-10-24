#include "lists.h"
/**
 * insert_nodeint_at_index - Adds a node at index in a singly linked list
 * @head: Pointer to a pointer to the first node in the list
 * @idx: The index at which to add a new node in the list
 * @n: The data side of the node(s)
 * Return: Returns pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *firstNew, *secondNew;

	firstNew = (listint_t *)malloc(sizeof(listint_t))
		if (firstNew == NULL)
			return (NULL);
	secondNew = (listint_t *)malloc(sizeof(listint_t))
		if (secodNew == NULL)
			return (NULL);
	if (idx == 0)
	{
		firstNew->next = *head;
		*head = firstNew;
	}
	else if (idx != 0)
	{
		while (*head < idx)
		{
			*head = (*head)->next;
			if (*head == idx)
			{
				secondNew->next = (*head)->next;
				(*head)->next = secondNew;
			}
			else if (*head == NULL && !idx)
				return (NULL);
				

		}
	}
	return (*head);
}

