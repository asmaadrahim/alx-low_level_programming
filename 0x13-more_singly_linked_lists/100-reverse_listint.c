#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *nextone = NULL;

	while (*head)
	{
		nextone = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nextone;
	}

	*head = previous;

	return (*head);
}
