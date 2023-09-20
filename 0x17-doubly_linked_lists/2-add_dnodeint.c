#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head of linked list
 * @n: integer data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;

	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
