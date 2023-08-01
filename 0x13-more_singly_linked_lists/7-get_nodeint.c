#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of linked list
 * @index: node index
 * Return: returns the nth node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr != NULL && i < index)
		{
			curr = curr->next;
			i++;
		}
		return (curr);
	}
	else
		return (NULL);
}
