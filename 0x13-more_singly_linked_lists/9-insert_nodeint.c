#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to head
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer value (node data)
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nodeint, *curr;
	unsigned int i;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint != NULL)
	{
		if (*head != NULL)
		{
			new_nodeint->n = n;
			curr = *head;
			if (idx != 0)
			{
				i = 0;
				while (curr != NULL && i < idx - 1)
				{
					curr = curr->next;
					i++;
				}
				new_nodeint->next = curr->next;
				curr->next = new_nodeint;
			}
			else
			{
				new_nodeint->next = curr;
				*head = new_nodeint;
			}
			return (new_nodeint);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
