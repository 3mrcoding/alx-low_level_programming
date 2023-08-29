#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head pointer of list
*/

void free_listint(listint_t *head)
{
	listint_t *i = head;
	listint_t *n;

	while (i->next != NULL)
	{
		n = i->next;
		free(i);
		i = n;
	}
}
