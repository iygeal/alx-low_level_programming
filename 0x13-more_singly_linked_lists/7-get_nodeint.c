#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns nth node of a list
 * @head: Pointer to first node in the list
 * @index: The index of the node, starting from 0
 * Return: Returns the nth node, or NULL if empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	p = head;
	while (p != NULL && counter < index)
	{
		p = p->next;
		counter++;
	}
	if (p != NULL && counter == index)
		return (p);
	else if (p == NULL)
		return (NULL);
	return (NULL);
}
