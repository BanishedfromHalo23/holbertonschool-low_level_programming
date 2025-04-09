#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list.
 * @idx: position.
 * @n: integer data to add on new node.
 * Return: address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *cop;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	cop = *h;
	while (idx != 1)
	{
		cop = cop->next;
		if (cop == NULL)
		{
			return (NULL);
		}
		idx--;
	}
	if (cop->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = cop;
	new_node->next = cop->next;
	cop->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
