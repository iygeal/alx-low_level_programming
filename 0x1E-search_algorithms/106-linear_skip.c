#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 * or NULL if not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (!list)
		return (NULL);

	current = list;
	while (current->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		current->express->index, current->express->n);
		if (current->express->n >= value)
			break;
		current = current->express;
	}

	if (!current->express)
	{
		prev = current;
		while (current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		current->index, current->express->index);
		prev = current;
		current = current->express;
	}

	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
