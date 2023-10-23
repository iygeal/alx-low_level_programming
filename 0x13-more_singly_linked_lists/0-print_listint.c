#include "lists.h"
/**
 * print_listint - Function that prints number of elements
 * @h: Pointer to first element in the list
 * Return: Returns the number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t counter = 0;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		counter++;
		p = p->next;
	}
	return (counter);
}
