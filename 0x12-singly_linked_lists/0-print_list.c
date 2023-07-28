#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list
 * Return: length/size of the list
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;
	int i, rem;

	while (h != NULL)
	{
		i = 0;
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('n');
			_putchar('i');
			_putchar('l');
		}
		else
		{
			rem = (h->len);
			_putchar('[');
			while (rem != 0)
			{
				_putchar((rem % 10) + '0');
				rem = rem / 10;
			}
			_putchar(']');
			_putchar(' ');
			while ((h->str[i]) != '\0')
			{
				_putchar(h->str[i]);
				i++;
			}
		}
		_putchar('\n');
		h = h->next;
		length++;
	}
	return (length);
}
