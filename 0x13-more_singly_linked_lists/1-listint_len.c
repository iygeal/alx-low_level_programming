#include "lists.h"
/**
 * listint_len - Function that returns number of elements in
 * a listint list
 * @h: Pointer to the first element in the list
 * Return: Returns number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t counter = 0;

	p = h;
	while (p != NULL)
	{
		counter++;
		p = p->next;
	}
	return (counter);
}
