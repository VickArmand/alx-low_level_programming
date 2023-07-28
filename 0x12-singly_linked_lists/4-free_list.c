#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		temp = head;

		while (temp != NULL)
		{
			free(temp->str);
			free(temp);
			temp = temp->next;
		}
	}
}
