#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: length/size of the list
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		length++;
	}
	return (length);
}
