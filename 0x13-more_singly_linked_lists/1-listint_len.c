#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head
 * Return: returns the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
