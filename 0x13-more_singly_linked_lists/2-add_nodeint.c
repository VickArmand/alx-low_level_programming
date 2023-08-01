#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the head
 * @n: integer value
 * Return: pointer to added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint, *temp;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_nodeint;
		new_nodeint->next = NULL;
	}
	else
	{
		temp = *head;
		new_nodeint->next = temp;
		*head = new_nodeint;
	}
	new_nodeint->n = n;
	return (new_nodeint);
}
