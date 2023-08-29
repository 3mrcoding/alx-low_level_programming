#include "lists.h"

/**
 * sum_listint - returns sum of elemetns of a linked lists
 * @head: pointer to header of 1st list
 *
 * Return: sum of elements of linked list
*/

int sum_listint(listint_t *head)
{
	int x = 0;

	const listint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		x += ptr->n;
		ptr = ptr->next;
	}
	return (x);
}
