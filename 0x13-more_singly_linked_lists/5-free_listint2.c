#include "lists.h"
/**
 * free_listint2 - Function that frees listint_t list
 * @head: Pointer to the first element in the list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
