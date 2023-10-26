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
		return (0);
	while (fastP != NULL && fastP->next != NULL)
	{
		printf("[%p] %d\n", (void *)slowP, slowP->n);
		slowP = slowP->next;
		counter++;

		fastP = fastP->next->next;

		if (slowP == fastP)
		{
			printf("-> [%p] %d\n", (void *)fastP, fastP->n);
			exit(98);
		}
	}
	return (counter);
}
