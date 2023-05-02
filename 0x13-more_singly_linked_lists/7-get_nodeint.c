#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head pointer
 * @index: index of node returned
 *
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);

	else
	{
		while (temp != NULL)
		{
			if (count == index)
				return (temp);
			count++;
			temp = temp->next;
		}
	}
	return (temp);
}
