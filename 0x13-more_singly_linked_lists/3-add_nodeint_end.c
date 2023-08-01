#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the linked list
 * @n: integer value
 * Return: added node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *temp;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_nodeint;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_nodeint;
	}
	new_nodeint->n = n;
	new_nodeint->next = NULL;
	return (new_nodeint);
}
