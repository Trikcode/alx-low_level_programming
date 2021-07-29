#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
