#include "lists.h"

/**
 * get_nodeint_at_index - print nth elemetn of a linked list
 * @head: pointer to header of 1st list
 * @index: index of required list
 *
 * Return: pointer to the nth list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	if (ptr->next == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
		if (i == index)
			break;
	}
	return (ptr);
}
