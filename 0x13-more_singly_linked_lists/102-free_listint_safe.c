#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list that may contain a loop
 * @h: A pointer to the head of the list
 * Return: The number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slowP, *fastP, *loopNode, *temp;
	size_t counter = 0;

	slowP = fastP = *h;
	while (fastP && fastP->next)
	{
		slowP = slowP->next;
		fastP = fastP->next->next;
		if (slowP == fastP)
		{
			loopNode = slowP;
			break;
		}
	}
	if (loopNode)
	{
		slowP = *h;
		while (slowP != fastP)
		{
			slowP = slowP->next;
			fastP = fastP->next;
		}
		while (fastP->next != loopNode)
			fastP = fastP->next;
		fastP->next = NULL;
	}
	while (*h)
	{
		temp = *h;
		*h = temp->next;
		free(temp);
		counter++;
	}
	return (counter);
}
