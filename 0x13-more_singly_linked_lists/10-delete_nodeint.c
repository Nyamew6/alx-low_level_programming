#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = *head;

	if (current == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = current->next;
			index--;
			if (current == NULL)
				return (-1);
		}
		prev->next = current->next;
		free(current);
		return (1);
		}
}
