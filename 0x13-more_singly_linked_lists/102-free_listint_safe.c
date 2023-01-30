#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int dif;
	listint_t *tempo;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
