#include "sort.h"

/**
 * insertion_sort_list -  function that sorts a doubly linked list
 * @list: list that should be sorted
 * Return: return void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *lst;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	lst = (*list)->next;
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
			current = key->prev; /*decrement*/
			print_list(*list);
		}
	lst = lst->next;
	}
}
