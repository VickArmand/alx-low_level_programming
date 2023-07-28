#include "lists.h"

/**
 * list_len - lists the size of the linked list
 * @h: head of linked list
 * Return: size
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
