#include "lists.h"

/**
 * sum_dlistint - calculates sum of all the data of a dlistint_t linked list
 * @head: pointer to head of linked list
 * Return: returns the sum of all the data (n) of a dlistint_t linked list
 * returns the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
