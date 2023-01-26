#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwere;
	list_t *temptemp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	nwere = malloc(sizeof(list_t));
	if (!nwere)
		return (NULL);
	nwere->str = strdup(str);
	nwere->len = len;
	nwere->next = NULL;
	if (*head == NULL)
	{
		*head = nwere;
		return (nwere);
	}
	while (temptemp->next)
		temptemp = temptemp->next;
	temptemp->next = nwere;
	return (nwere);
}
