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
	listint_t *newNode, *p;
	unsigned int counter;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	p = *head;
	for (counter = 0; counter < idx - 1; counter++)
	{
		p = p->next;
		if (p == NULL && idx - counter > 0)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = p->next;
	p->next = newNode;
	return (newNode);
}
