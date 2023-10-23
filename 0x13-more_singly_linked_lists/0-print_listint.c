#include "lists.h"
/**
 * print_listint - Function that prints number of elements
 * @h: Pointer to first element in the list
 * Return: Returns the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *p;

	p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		counter++;
	}
	p = NULL;
	return (counter);
}
