#include "lists.h"

/**
 * dlistint_len - counts number of elements in a linked dlistint_t list
 * @h: pointer to the head of linked list
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
