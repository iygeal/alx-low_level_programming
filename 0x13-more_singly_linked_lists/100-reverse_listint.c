#include "lists.h"
/**
 * reverse_listint - Function to reverse nodes of a linked list
 * @head: Pointer to a pointer of the first node in the list
 * Return: Returns pointer to the first node on the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode, *prevNode, *nextNode;

	if (*head == NULL)
		return (NULL);

	currentNode = *head;
	prevNode = NULL;
	nextNode = NULL;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	*head = prevNode;
	return (*head);
}
