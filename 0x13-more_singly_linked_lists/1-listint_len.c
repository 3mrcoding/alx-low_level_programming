#include "lists.h"

/**
 * listint_len - returns no. elemetns of a linked lists
 * @h: pointer to header of 1st list
 *
 * Return: no. of elements
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
