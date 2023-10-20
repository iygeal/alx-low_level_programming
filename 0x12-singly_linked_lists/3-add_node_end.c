#include "lists.h"
/**
 * add_node_end - Function that adds a node at the end of a linked list
 * @head: Pointer to a pointer to the first linked list
 * @str: Argument string
 * Return: Pointer for Success or otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, counter = 0;
	list_t *new, *holder;

	new = malloc(sizeof(list_t));
	
	if(new == NULL)
		return (NULL);
	new->str = strdup(str);
	
	for (i = 0; str[i] != '\0'; i++)
		counter++;
	new->len = counter;
	new->next = NULL;
	holder = *head;
	if (holder == NULL)
		*head = new;
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = new;
	}
	return (*head);
}
