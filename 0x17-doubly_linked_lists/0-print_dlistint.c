#include "lists.h"
/**
 * print_dlistint - Function that prints all elements in a list
 * @h: Pointer to the first node in the list
 * Return: Returns number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
