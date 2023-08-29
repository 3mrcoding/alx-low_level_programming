#include "lists.h"

size_t print_listint(const listint_t *h)
{
    int i = 0;
    const listint_t *ptr = h;
    
    if (h == NULL)
        return 1;


    while (ptr != NULL)
    {
        printf("%d\n",ptr->n);
        ptr = ptr->next;
        i++;
    }
    return i;
}
