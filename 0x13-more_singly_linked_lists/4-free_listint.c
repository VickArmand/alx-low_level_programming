#include "lists.h"

/**
 * free_listint - frees an integer linked list
 * @head: pointer to head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
