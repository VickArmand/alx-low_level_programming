#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: double pointer to the head of linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *current;
	unsigned int count = 0, i;

	if (*head == NULL)
		return (-1);
	node = *head;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	if (index >= count)
		return (-1);
	current = *head;
	i = 0;
	if (index == 0)
	{
		*head = current->next;
		*head->prev = NULL;
		free(current);
	}
	else
	{
		while (current != NULL && i < index)
		{
			current = current->next;
			i++;
		}
		if (index == count - 1)
		{
			current->prev->next = NULL;
		}
		else
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
		}
		free(current);
	}
	return (1);
}
