#include "sort.h"

/**
 * insertion_sort_list -  function that sorts a doubly linked list of integers in ascending order
 * @list: list that should be sorted
 * Return: return void
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *new_list;

    if ((*list) != NULL && (*list)->next == NULL)
        return ;
    
    new_list = NULL;
    while (current->next != NULL)
    {
        if (current->next->n < current)
        {
            current->prev = current;
        }
    }
    

    
}