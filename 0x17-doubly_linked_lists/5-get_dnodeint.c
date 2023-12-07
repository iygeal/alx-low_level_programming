#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the first node in the list
 * @index: The index of the nth node
 * Return: Returns the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}
	return (NULL);
}
