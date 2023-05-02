#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: head pointer
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (0);

	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
}
}
