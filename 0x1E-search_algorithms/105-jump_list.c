#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;
	listint_t *current, *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	prev_node = list;
	prev = 0;

	while (current->index < size && current->n < value)
	{
		prev_node = current;
		for (prev = 0; prev < step && current->next; prev++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index,
		current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev_node->index, current->index);

	while (prev_node != current->next && prev_node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev_node->index,
		prev_node->n);
		prev_node = prev_node->next;
	}

	if (prev_node && prev_node->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev_node->index,
		prev_node->n);
		return (prev_node);
	}

	return (NULL);
}
