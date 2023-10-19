#include "lists.h"
/**
 * list_len - Function that returns the number of
 * elements in a linked list
 * @h: Pointer to the list
 * Return: Returns number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
