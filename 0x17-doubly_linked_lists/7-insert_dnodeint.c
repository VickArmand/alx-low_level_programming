#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the linked list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer data
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node, *current;
	unsigned int count = 0, i;

	if (idx > 0 && *h == NULL)
		return (NULL);
	else if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		node = *h;
		while (node != NULL)
		{
			node = node->next;
			count++;
		}
		if (idx > count)
			return (NULL);
		else if (idx == count)
			new = add_dnodeint_end(h, n);
		else
		{
			current = *h;
			i = 0;
			while (current != NULL && i < idx - 1)
				current = current->next, i++;
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				free(new);
				return (NULL);
			}
			(current->next)->prev = new;
			new->next = current->next;
			current->next = new;
			new->prev = current;
			new->n = n;
		}
	}
	return (new);
}
