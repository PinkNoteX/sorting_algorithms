#include "sort.h"
/**
 * swapper - swap two nodes
 * @node1: first node
 * @node2: second node
 * Return: void
 */
void swapper(listint_t **node1, listint_t **node2)
{
	(*node1)->next = (*node2)->next;
	(*node2)->prev = (*node1)->prev;
	if ((*node2)->next)
		(*node2)->next->prev = (*node1);
	if ((*node1)->prev)
		(*node1)->prev->next = (*node2);
	(*node2)->next = (*node1);
	(*node1)->prev = (*node2);
}
/**
 * insertion_sort_list - sort using insertion method
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;
	listint_t *tmp = NULL;

	if (*list && list && (*list)->next)
	{
		tmp = (*list)->next;
		while (tmp)
		{
			prev = tmp->prev;
			current = tmp;
			while (prev && current->n < prev->n)
			{
				swapper(&prev, &current);
				if (prev == *list)
					*list = current;
				print_list(*list);
				prev = current->prev;
			}
			tmp = tmp->next;
		}
	}

}
