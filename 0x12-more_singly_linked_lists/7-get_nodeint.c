#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }

    return (NULL);
}
