/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: doubly linked list to be sorted
 * Return: Void
 */
#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *m;

	x = (*list)->next;
	if (list == NULL || *list == NULL)
		return;
	while (x != NULL)
	{
		m = x;
		if (m->n < m->prev->n)
		{
			x = x->next;
			while (m->prev != NULL && m->n < m->prev->n)
			{
				nodeLeft(list, m);
				print_list(*list);
			}
		}
		else
			x = x->next;
	}
}

/**
 * nodeLeft - Moves node left one spot
 * @head: Head of list
 * @node: Node to be moved
 * Return: Void
 */

void nodeLeft(listint_t **head, listint_t *node)
{
	listint_t *l = node->prev, *r = node->next;

	if (l != NULL)
	{
		node->prev = l->prev;
		node->next = l;
		l->next = r;
		if (l->prev != NULL)
			l->prev->next = node;
		else
			*head = node;
		l->prev = node;
		if (r != NULL)
			r->prev = l;
	}
}
