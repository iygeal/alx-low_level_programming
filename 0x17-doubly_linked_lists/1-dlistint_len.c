#include "lists.h"
/**
 * dlistint_len - Returns the numbers of elements in a doubly linked list
 * @h: Pointer to the first element in the list
 * Return: Returns len if success or NULL if not
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
