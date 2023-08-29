#include "lists.h"

/**
 * add_nodeint - function adds new node in the beginning of a linked list
 * @head: pointer to head pointer
 * @n: new int needs to be added
 *
 * Return: pointer of the new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
