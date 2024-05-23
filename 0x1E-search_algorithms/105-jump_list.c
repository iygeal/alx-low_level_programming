#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: Pointer to the first node where value is located,
 * or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *prev, *curr;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = curr = list;

	while (curr->next != NULL && curr->n < value)
	{
		prev = curr;
		for (i = 0; i < step && curr->next != NULL; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, curr->index);

	while (prev != NULL && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
