#include "lists.h"

/**
 *free_listint2 - function that frees a list
 *@head: head
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *node;

	node = *head;

	while (node != NULL)

	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
