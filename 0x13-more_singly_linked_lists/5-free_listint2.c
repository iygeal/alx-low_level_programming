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
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
