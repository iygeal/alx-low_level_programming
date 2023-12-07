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
	size_t i;
	dlistint_t *newNode, *temp = *h;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL || *h == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
