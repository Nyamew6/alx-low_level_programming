#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head pointer
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *current;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	prev = head;
	current = head->next;

	while (current != NULL && current < prev)
	{
		printf("[%p} %d\n", (void *)prev, prev->n);
		count++;
		prev = prev->next;
		current = current->next;

		if (current != NULL && current < prev)
			current = current->next;
	}
	printf("[%p] %d\n", (void *)prev, prev->n);
	count++;

	if (current != NULL)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		count++;
	}
	return (count);
}
