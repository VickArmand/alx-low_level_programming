#include "lists.h"

/**
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *temp;
	int i;

	node_end = malloc(sizeof(list_t));
	temp = *head;

	if (node_end == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		node_end->next = NULL;
		*head = node_end;
	}
	else
	{
		while(temp != NULL)
			temp = temp->next;
		temp->next = node_end;
	}
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			node_end->str[i] = str[i];
			i++;
		}
		node_end->str[i] = '\0';
		node_end->len = i - 1;
	}
	else
	{
		node_end->len = 0;
	}
	return (node_end);
}
