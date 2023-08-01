#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of a linked list
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int nodedata;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		nodedata = temp->n;
		*head = temp->next;
		free(temp);
	}
	else
	{
		return (0);
	}
	return (nodedata);
}
