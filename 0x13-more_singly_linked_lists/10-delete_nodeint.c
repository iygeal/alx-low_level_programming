#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: Pointer to the pointer to the first node in the list
 * @index: The index of the node to be deleted
 * Return: 1 if success or -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *prevNode;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	prevNode = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(prevNode);
		return (1);
	}
	while (counter < index - 1)
	{
		if (prevNode == NULL || prevNode->next == NULL)
			return (-1);
		prevNode = prevNode->next;
		counter++;
	}
	currentNode = prevNode->next;
	prevNode->next = currentNode->next;
	free(currentNode);
	return (1);
}
