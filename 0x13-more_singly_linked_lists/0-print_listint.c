#include "lists.h"
/**
 * print_listint - Function that prints number of elements
 * @h: Pointer to first element in the list
 * Return: Returns the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
