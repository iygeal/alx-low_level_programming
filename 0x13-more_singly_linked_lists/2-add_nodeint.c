#include "lists.h"
/**
 * add_nodeint - Function that adds new node at the begining of a list
 * @head: Pointer to the first element in the list
 * @n: The data part(s) of the list
 * Return: Returns pointer to new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);

}
