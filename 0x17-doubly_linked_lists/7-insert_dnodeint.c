#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at a given index
 * @h: Pointer to a pointer to the first node in the list
 * @idx: The index at which to insert
 * @n: The value to insert at index
 * Return: Returns pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode = *h;
	size_t counter = 0;

	if (*h == NULL && idx > 0)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		if (currentNode != NULL)
			currentNode->prev = newNode;
		return (newNode);
	}
	for (; counter  <= idx; counter++)
	{
		if (currentNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
		if (counter + 1 == idx)
		{
			if (currentNode->next != NULL)
				currentNode->next->prev = newNode;
			newNode->next = currentNode->next;
			currentNode->next = newNode;
			newNode->prev = currentNode;
			return (newNode);
		}
		currentNode = currentNode->next;
	}
	return (newNode);
}
