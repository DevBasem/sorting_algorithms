#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order
 * using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		listint_t *key = current;
		listint_t *prev = current->prev;

		while (prev != NULL && key->n < prev->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = key;
			else
				*list = key;

			if (key->next != NULL)
				key->next->prev = prev;

			prev->next = key->next;
			key->prev = prev->prev;

			key->next = prev;
			prev->prev = key;

			print_list(*list);
			prev = key->prev;
		}

		current = current->next;
	}
}
