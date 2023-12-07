#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the begining of a doubly linked list
 * @head: Pointer to a pointer to the first node in the list
 * @n: The data of the node
 * Return: Returns pointer to the new node if success or NULL if not
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
