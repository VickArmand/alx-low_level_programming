#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		free(temp);
		*head = (*head)->next;
	}
	*head = NULL;
}
