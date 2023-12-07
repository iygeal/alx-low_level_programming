#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at end of doubly linked list
 * @head: Pointer to a pointer to the first node
 * @n: Data part of the list
 * Return: Pointer to the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode,  *temp  = *head;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	newNode->prev = temp;

	return (newNode);
}
