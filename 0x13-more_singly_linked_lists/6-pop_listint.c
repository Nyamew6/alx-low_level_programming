#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a head pointer
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		a = (*head)->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (a);
}
