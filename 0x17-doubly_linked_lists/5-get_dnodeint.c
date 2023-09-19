#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list
 * @head: pointer to the head of linked list
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 * otherwise return node pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current, *node;
	unsigned int i = 0, count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head, node = head;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	if (count <= index)
	{
		return (NULL);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
