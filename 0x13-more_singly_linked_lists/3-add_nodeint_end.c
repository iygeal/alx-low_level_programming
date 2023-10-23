#include "lists.h"
/**
 * add_nodeint_end - Funtion that adds new node at the end of list
 * @head: Pointer to the first element of the list
 * @n: The data part of the nodes
 * Return: Pointer to the new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *p;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = newNode;
	}
	return (newNode);
}
