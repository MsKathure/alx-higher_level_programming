#include "lists.h"

/**
 * check_cycle - Determines whether a linked list contains a cycle.
 * @list: The linked list to be checked.
 *
 * Return: 1 if the list contains a cycle, 0 if it does not.
 */
int check_cycle(listint_t *list)
{
    listint_t *slow_ptr = list;
    listint_t *fast_ptr = list;

    // Check if the list is empty
    if (!list)
        return (0);

    // Use the slow and fast pointers to detect a cycle in the list
    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr)
            return (1);
    }
    return (0);
}

