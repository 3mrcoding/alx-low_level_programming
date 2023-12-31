#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head pointer of list
*/

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
