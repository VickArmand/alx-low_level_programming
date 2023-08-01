#include "lists.h"

/**
 * free_listint - frees an integer linked list
 * @head: pointer to head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(&(head->n));
		free(head->next);
		head = head->next;
	}
}
