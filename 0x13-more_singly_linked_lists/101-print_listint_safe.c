#include "lists.h"
/**
 * print_listint_safe - Function that prints a singly linked list
 * @head: Pointer to the first node in the list
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *fastP = head;
	const listint_t *slowP = head;

	if (head == NULL)
		exit(98);

	while (fastP != NULL && slowP != NULL)
	{
		slowP = slowP->next;
		fastP = fastP->next->next;
		printf("%d", slowP->n);
		counter++;
		if (fastP == NULL || fastP->next == NULL)
			return (counter)
		if (slowP == fastP)
			printf("%d%d", fastP->n, slowP->n);
	}
	return (counter);

