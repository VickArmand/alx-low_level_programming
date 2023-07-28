#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: pointer to first element of list
 * @str: string
 * Return: pointer to tail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *temp;
	int i;

	node_end = malloc(sizeof(list_t));

	if (node_end == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_end;
	}
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		node_end->str = strdup(str);
		node_end->len = i;
	}
	else
	{
		node_end->len = 0;
	}
	node_end->next = NULL;
	return (node_end);
}
