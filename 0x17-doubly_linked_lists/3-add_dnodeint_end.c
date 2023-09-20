#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the linked list
 * @n: integer data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	return (new);
}
