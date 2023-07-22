#include "sort.h"

/**
 * insertion_sort_list -  function that sorts a doubly linked list of integers in ascending order
 * @list: list that should be sorted
 * Return: return void
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *lst = (*list)->next;
    listint_t *temp_head = *list;

    (void) temp_head;
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return ;


    while (lst)
    {
        listint_t *key = lst;
        listint_t *current = lst->prev;

        while (current != NULL && current->n > key->n)
        {
            current->next = key->next;
            if (key->next != NULL)
                key->next->prev = current;
            
            key->next = current;
            key->prev = current->prev;
        
            if (current->prev != NULL)
                current->prev->next = key;
            current->prev = key;

            if (key->prev == NULL)
                *list = key;
            current = key->prev; /*decrement to backward and shift the element in forward*/
            print_list(*list);
        }
        lst = lst->next;
    }
}
