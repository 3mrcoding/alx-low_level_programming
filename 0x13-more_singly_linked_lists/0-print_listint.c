#include "lists.h"

/**
 * print_listint - print elemetns of a linked list
 * @h: pointer to header of 1st list
 *
 * Return: no. of elements
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
