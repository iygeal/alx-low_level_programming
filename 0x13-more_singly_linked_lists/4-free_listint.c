#include "lists.h"
/**
 * free_listint - Function that frees memory allocated to
 * a listint list
 * @head: Pointer to the first node of the list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode, *p;

	currentNode = head;
	while (currentNode != NULL)
	{
		p = currentNode;
		currentNode = currentNode->next;
		free(p);
	}
}
