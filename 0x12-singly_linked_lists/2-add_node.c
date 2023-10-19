#include "lists.h"
/**
 * add_node - Adds new node at the begining of a linked list
 * @head: Pointer to pointer to the first node
 * @str: A string argument
 * Return: Pointer on success or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, counter = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	new->len = counter;
	new->next = *head;
	*head = new;
	return (*head);
}
