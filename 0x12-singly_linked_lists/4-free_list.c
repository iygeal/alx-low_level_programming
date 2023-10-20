#include "lists.h"
/**
 * free_list - This function frees a singly linked list
 * @head: A pointer to the list
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder->str);
		free(holder);
	}
}
