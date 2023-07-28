#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head pointer
 * str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}	
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			new_node->str[i] = str[i];
			i++;
		}
		new_node->str[i] = '\0';
		new_node->len = i - 1;
	}
	else
	{
		new_node->len = 0;
	}
	if (head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
