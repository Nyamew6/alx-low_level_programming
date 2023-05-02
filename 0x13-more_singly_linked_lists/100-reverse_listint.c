#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to head pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;

	return (*head);
}
