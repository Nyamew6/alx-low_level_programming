#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head pointer
 * @n: value in the new node created
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (new_node);
}
