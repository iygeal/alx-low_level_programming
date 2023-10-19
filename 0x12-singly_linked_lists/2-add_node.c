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
	char *str1;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	str1 = strdup(str);
	if (str1 == NULL)
		return (NULL);
	new->str = str1;
	new->next = *head;
	*head = new;
	return (new);
}
