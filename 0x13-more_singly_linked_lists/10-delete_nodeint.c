#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: double pointer to the head of linked list
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i;

	if (*head != NULL)
	{
		curr = *head;
		if (index != 0)
		{
			i = 0;
			while (curr != NULL && i < index - 1)
			{
				curr = curr->next;
				i++;
			}
			temp = curr->next;
			curr->next = temp->next;
			free(temp);

		}
		else
		{
			*head = curr->next;
			free(curr);
		}
		return (1);
	}
	else
		return (-1);
}
